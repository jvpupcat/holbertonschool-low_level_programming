#include "search_algos.h"

/**
 * print_stmt - function that prints stmt
 * @array: array of int
 * @left: left side of array
 * @right: right side of array
 * Return: None
 **/
void print_stmt(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right + 1; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: target value of array
 * Return: -1 upon failure, middle upon success
 **/
int binary_search(int *array, size_t size, int value)
{
	int middle, left, right;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		middle = (left + right) / 2;
		print_stmt(array, left, right);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else /* (array[middle] > value) */
		{
			right = middle - 1;
		}
	}
	return (-1);
}

#include <stdio.h>

/**
 * stmt - function that prints a statement
 * @array: array of int
 * @left: left side of array
 * @right: right side of array
 * Return: None
 **/
void stmt(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right + 1; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted
 * array using Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: target value of array
 * Return: -1 upon failure or NULL, middle upon success
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
		stmt(array, left, right);
		if (array[middle] == value) /*at middle*/
		{
			return (middle);
		}
		else if (array[middle] < value) /*less than middle*/
		{
			left = middle + 1;
		}
		else /*more than middle */
		{
			right = middle;
		}
	}
	return (-1);
}

#include "search_algos.h"

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
	unsigned int i, middle, left, right;

	left = 0;
	right = size - 1;
	middle = (left + right) / 2;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Searching in array: %d", array[i])
		if (array[middle] < value)
		{
			left = m + 1;
		}
		if (array[middle] > value)
		{
			right = m - 1;
		}
		if (array[middle] == value)
			return middle;
	}
	return (-1);
}

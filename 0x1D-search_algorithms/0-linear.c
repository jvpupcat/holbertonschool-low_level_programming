#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of int
 * @array: array of integers
 * @size: size of array
 * @value: index of array
 * Return: 0 upon success
 **/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

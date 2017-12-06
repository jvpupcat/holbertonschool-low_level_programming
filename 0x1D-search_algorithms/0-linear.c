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

	if (array == NULL || value == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == array[value])
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		else
			return (0);
	}
	return (0);
}

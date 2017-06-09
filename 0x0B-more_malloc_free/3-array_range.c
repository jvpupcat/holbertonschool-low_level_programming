#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first variable that passes through function
 * @max: second variable that passes through function
 * Return: int
 **/
int *array_range(int min, int max)
{
	int x, y;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * min);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = min, y = 0; x < max; x++, y++)
	{
		array[x] = y;
	}
	return (array);
}

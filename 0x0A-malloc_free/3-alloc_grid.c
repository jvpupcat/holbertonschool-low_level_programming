#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check for Holberton school students.
 * @width: width
 * @height: height
 * Return: none.
 **/
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(array[x]);
			}
			free(array);
		}
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}


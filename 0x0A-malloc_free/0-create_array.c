#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars/initializes with
 * a specific char
 * @size:
 * @c:
 * Return: array
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (array == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	array[x] = '\0';
	return (array);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: first variable that passes through function
 * @size: second variable that passes through function
 * Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(unsigned int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb; x++)
	{
		array[x] = size;
	}
	array[x] = '\0';
	return (array);
}

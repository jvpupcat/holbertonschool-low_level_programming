#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int that passes through function
 * Return: a pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}

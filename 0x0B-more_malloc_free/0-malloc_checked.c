#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int that passes through function
 * Return: none
 **/
void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(sizeof(unsigned int) * b);
	if (array == 0)
	{
		exit(98);
	}
	return (array);
}

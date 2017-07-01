#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: given variable that runs through program
 * @index: index position that will be set at 0
 * Return: 1 upon success, -1 upon error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n & ~mask;
	return (1);
}

#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: a given variable that runs through the program
 * @index: the index that sets the value
 * Return: 1 upon success, -1 upon error
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | mask;
	return (1);
}

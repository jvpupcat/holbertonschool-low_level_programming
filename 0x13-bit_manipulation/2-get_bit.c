#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number that runs through function
 * @index: index of binary number that needs to be printed out
 * Return: value of the bit at index or -1 if error
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * (8 - 1))
		return (-1);
	n = n >> index;
	if (((n >> 1) << 1) == n)
		return (0);
	return(1);
}

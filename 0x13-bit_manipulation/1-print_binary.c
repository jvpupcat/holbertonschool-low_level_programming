#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a #
 * @n: number that runs through function
 * Return: none
 **/
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		n = n & 1;
		_putchar(n + '0');
	}
}

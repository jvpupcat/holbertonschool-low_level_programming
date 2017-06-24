#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: number that passes through function
 * Return: none
 **/
void print_number(int n)
{
	int i;
	int max = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 0; i < 10; i++)
	{
		if (n / max != 0)
		{
			_putchar(((n / max) % 10) + '0');
		}
		max /= 10;
	}
}

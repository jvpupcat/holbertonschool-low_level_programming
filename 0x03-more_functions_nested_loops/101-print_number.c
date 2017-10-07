#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: number that passes through function
 * Return: none
 **/
void print_number(int n)
{
	int i, stored_num = 0;
	int max = 1000000000;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 0; i < 10; i++)
	{
		if (n / max != 0)
		{
			stored_num = (n / max) % 10;
			if (stored_num < 0)
			{
				stored_num *= -1;
			}
			_putchar(stored_num + '0');
		}
		max /= 10;
	}
}

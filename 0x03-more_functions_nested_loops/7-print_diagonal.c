#include "holberton.h"

/**
 * print_diagonal - function that prints diagonally
 * @n: variable that passes through function
 * Return: none
 **/
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			if (x > y)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(92);
			}
		}
		_putchar('\n');
	}
}

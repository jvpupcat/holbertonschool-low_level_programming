#include "holberton.h"

/**
 * print_square - function that prints #
 * @size: variable that passes through function
 * Return: none
 **/
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

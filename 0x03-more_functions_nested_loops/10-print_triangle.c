#include "holberton.h"

/**
 * print_triangle - function that prints triangle
 * @size: variable that passes through function
 * Return: none
 **/
void print_triangle(int size)
{
	int x;
	int y;
	int z;
	int n = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - n; y++)
		{
			_putchar(' ');
		}
		for (z = 0; z < size - size + n; z++)
		{
			_putchar(35);
		}
		n++;
		_putchar('\n');
	}
}

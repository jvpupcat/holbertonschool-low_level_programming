#include "holberton.h"

/**
 * print_line - function that prints line
 * @n: variable that is passed through function
 * Return: none
 **/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

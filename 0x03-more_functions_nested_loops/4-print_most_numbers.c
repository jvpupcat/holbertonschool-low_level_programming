#include "holberton.h"

/**
 * print_most_numbers - function that prints everything but 2 & 4
 *
 * Return: none
 **/
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

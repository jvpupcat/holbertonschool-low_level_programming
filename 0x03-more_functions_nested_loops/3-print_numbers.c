#include "holberton.h"

/**
 * print_numbers - function that prints numbers 0 - 9
 *
 * Return: none
 **/
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

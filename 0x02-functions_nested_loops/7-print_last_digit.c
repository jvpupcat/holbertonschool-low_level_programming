#include "holberton.h"

/**
 * print_last_digit - entry point
 * @x: variable that passes through function
 * Return: last digit
 **/
int print_last_digit(int x)
{
	int y = x % 10;

	if (x < 0)
	{
		y = -y;
		_putchar(y + '0');
		return (y);
	}
	else
	{
		_putchar(y + '0');
		return (y);
	}
}

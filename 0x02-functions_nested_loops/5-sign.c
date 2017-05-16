#include "holberton.h"

/**
 * print_sign - function to print symbol based on integer
 * @n: variable that passes through if...else
 * Return: returns 1, 0, & -1 upon success
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

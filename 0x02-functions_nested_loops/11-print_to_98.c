#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints up to 98
 * @n: variable that passes through function
 * Return: none
 **/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n++);
	}
	while (n > 98)
	{
		printf("%d, ", n--);
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

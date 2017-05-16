#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - function to print alphabets
 *
 * Return: none
 **/
void print_alphabet(void)
{
	int x;

	x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

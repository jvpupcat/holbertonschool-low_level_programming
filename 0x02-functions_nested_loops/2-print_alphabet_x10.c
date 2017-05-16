#include "holberton.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times
 *
 * Return: none
 **/
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

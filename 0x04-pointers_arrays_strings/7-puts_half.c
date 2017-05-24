#include "holberton.h"

/**
 * puts_half - function that prints half the string
 * @str: pointer that points to string of numbers
 * Return: none
 **/
void puts_half(char *str)
{
	int x;
	int y;

	for (x = 0; str[x] != '\0'; x++)
		x++;
	for (y = x / 2; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

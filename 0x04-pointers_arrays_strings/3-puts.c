#include "holberton.h"

/**
 * _puts - function that prints
 * @str: pointer
 * Return: none
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

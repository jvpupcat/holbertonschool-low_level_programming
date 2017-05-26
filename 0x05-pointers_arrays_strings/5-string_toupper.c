#include "holberton.h"

/**
 * string_toupper - function to change lowercase letters to uppercase
 * @x: pointer
 * Return: char
 **/
char *string_toupper(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] >= 'a' && x[y] <= 'z')
		{
			x[y] = x[y] - 32;
		}
	}
	return (x);
}

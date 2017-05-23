#include "holberton.h"

/**
 * _strlen - function that counts characters of a string
 * @s: variable
 * Return: none
 **/
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

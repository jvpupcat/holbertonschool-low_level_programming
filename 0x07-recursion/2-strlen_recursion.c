#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer that points to string
 * Return: 0 upon success
 **/
int _strlen_recursion(char *s)
{
	int x;

	if (*s != '\0')
	{
		return (0);
	}
	x = (_strlen_recursion(++s));
	return (x + 1);
}

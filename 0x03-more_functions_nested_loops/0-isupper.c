#include "holberton.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: variable that passes through function
 * Return: 1 if c is uppercase, 0 if not
 **/
int _isupper(int c)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	if (c >= a && c <= z)
	{
		return (0);
	}
	else if (c >= A && c <= Z)
	{
		return (1);
	}
	return (0);
}

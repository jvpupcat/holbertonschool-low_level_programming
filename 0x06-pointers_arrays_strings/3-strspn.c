#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: unsigned int
 **/
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	z = 0;

	for (x = 0; s[x] > ' '; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				z++;
			}
		}
	}
	return (z);
}

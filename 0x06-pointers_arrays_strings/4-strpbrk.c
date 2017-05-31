#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 *
 **/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (0);
}

#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 * Return: 0 upon success
 **/
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}

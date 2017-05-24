#include "holberton.h"

/**
 * _strcpy - function that copies a string
 * @dest: s1
 * @src: s2
 * Return: a character
 **/
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return dest;
}

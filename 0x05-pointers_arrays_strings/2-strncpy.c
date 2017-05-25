#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest: s1
 * @src: s2
 * @n:variable
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

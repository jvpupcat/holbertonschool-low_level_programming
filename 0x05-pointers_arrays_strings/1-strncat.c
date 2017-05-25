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

/**
 * _strncat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * Return: pointer
 **/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';
	return (dest);
}

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
 * _strcat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * Return: pointer
 **/
char *_strcat(char *dest, char *src)
{
	int x;
	int dest_len = _strlen(dest);

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';
	return (dest);
}

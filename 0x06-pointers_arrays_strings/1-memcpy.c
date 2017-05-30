#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: s1
 * @src: setting s2 to dest
 * @n: bytes to be copied over
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

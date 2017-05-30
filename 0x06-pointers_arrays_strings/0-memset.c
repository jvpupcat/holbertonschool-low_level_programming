#include "holberton.h"

/**
 * _memset - function that fills memory with a constand byte
 * @s: pointer to a memory block that will be filled
 * @b: the value to be stored
 * @n: 
 * Return: char upon success
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

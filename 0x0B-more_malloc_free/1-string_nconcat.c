#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: a pointer
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * string_nconcat - check for Holberton students.
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: pointer
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int a, b, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = _strlen(s1);
	b = _strlen(s2);
	if (n > b)
	{
		n = b;
	}
	array = malloc(sizeof(char) * (a + n) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		array[c] = s1[c];
	}
	for (d = 0; d < n; c++, d++)
	{
		array[c] = s2[d];
	}
	return (array);
}

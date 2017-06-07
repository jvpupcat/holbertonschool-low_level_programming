#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: s1
 **/
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	int total;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (b = 0; s2[b] != '\0'; b++)
		;

	total = a + b + 1;
	array = malloc(sizeof(char) * total);
	if (array == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		array[c] = s1[c];
	}
	for (d = 0; d < b; d++)
	{
		array[c + d] = s2[d];
	}
	array[c + d] = '\0';
	return (array);
}

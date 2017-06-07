#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that calculates the length of a strings
 * @str: string that passes through function
 * Return: 0 upon success
 **/
int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (0);
}

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
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = _strlen(s1);
	b = _strlen(s2);
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

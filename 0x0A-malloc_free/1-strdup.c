#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that calculates the length of a string
 * @str: string
 * Return: number of string
 **/
int _strlen(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strdup - function that returns pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer
 **/
char *_strdup(char *str)
{
	int x;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	array = malloc((_strlen(str)) * sizeof(char) + 1);
	for (x = 0; x <= _strlen(str); x++)
	{
		array[x] = str[x];
	}
	array[x] = '\0';
	return (array);
	free(array);
}

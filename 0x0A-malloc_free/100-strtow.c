#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: string that passes through function
 * Return: pointer to an array of strings
 **/
char **strtow(char *str)
{
	char **array;
	int x, y = 0, z = 0;

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		y++;
	}
	y++;
	array = malloc(sizeof(char) * y);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		*array[z] = str[x];
		z++;
	}
	array[z] = '\0';
	return (array);
}

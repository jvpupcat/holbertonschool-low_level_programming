#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenations all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 **/
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			d++;
		}
		d++;
	}
	d++;

	array = malloc(sizeof(char) * d);
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			array[c] = av[a][b];
			c++;
		}
		array[c] = '\n';
		c++;
	}
	array[c] = '\0';
	return (array);
}

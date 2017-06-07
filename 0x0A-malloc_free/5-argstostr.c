#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenations all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Returns: pointer to a new string
 **/
char *argstostr(int ac, char **av)
{
	int x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (ac > 0)
	{
		for (x = 0; x < ac; x++)
		{
			printf("%s\n", av[x]);
		}
	}
	return (0);

}

#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that calculates length of string
 * @str: pointer to string
 * Return: 0 upon success
 **/
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
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	int total;
	int length;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 0; argc != '\0'; a++)
		{
			length = _strlen(argv[a]);
			for (b = 0; b < length; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			total = total + atoi(argv[a]);
		}
	}
	return (0);
}

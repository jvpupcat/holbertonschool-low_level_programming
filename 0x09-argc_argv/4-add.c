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
		x++
	}
	return (x);
}

/**
 * _isdigit - function that checks for a digit
 * @c: variable that passes through function
 * Return: 1 upon finding a digit, 0 otherwise
 **/
char _isdigit(char *c)
{
	int a = '0';
	int i = '9';

	if (c >= a && c <= i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
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
				if (_isdigit(*argv) != 0)
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

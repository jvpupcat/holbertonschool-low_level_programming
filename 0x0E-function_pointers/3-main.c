#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check for Holberton students.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	int x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", x);
	return (0);
}

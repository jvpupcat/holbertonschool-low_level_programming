#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	int x = 1;
	int y = 2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[x]) * atoi(argv[y]);
		printf("%d\n", result);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints out name of file
 * @argc: argument count
 * @argv: argument name
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

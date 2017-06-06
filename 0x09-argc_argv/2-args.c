#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	int x;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}

#include <stdio.h>

/**
 * main - function that counts the number of arguments passed through
 * @argc: argument count
 * Return: 0 upon success
 **/
int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - function that counts the number of arguments passed through
 * @argc: argument count
 * @argv: unused attribute argv
 * Return: 0 upon success
 **/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

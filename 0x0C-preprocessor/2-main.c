#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 *
 * Return: 0 upon success
 **/
int main(void)
{
	printf(__FILE__);
	putchar('\n');
	return (0);
}

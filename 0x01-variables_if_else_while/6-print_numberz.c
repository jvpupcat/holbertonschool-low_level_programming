#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zero upon success
 **/
int main(void)
{
	int x;

	x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

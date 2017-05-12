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

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

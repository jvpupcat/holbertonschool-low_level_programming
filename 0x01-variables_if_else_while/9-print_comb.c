#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zero upon success
 **/
int main(void)
{
	char x;

	x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x >= '0' && x <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}

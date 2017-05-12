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
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x != '9' || y != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

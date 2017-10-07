#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zero upon success
 **/
int main(void)
{
	int a, b;
	int mod_a;
	int div_b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			mod_a = a % 10;
			div_b = b % 10;
	
			if (a > b)
			{
				putchar(a);
				putchar(' ');
				putchar(b);
				if (a == (98 + 0) && b == (99 + 0))
					break;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

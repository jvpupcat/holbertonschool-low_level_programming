#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zero upon success
 **/
int main(void)
{
	int a, b, c, d;
	int tens1, tens2;
	int combo1, combo2;

	tens1 = 0; tens2 = 0; combo1 = 0; combo2 = 0;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					tens1 = a * 10;
					tens2 = c * 10;
					combo1 = tens1 + b;
					combo2 = tens2 + d;
	
					if ((combo2) > (combo1))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a == '9' && b == '8' && c == '9' && d == '9')
							break;
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

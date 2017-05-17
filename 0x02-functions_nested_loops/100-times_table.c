#include "holberton.h"
/**
 * print_times_table - function that prints times tables
 * @n: variable that passes through function
 * Return: none
 **/
void print_times_table(int n)
{
	int a, b, c, store_100s, store_10s, store_1s;

	if (n == 0)
		_putchar('0');
	for (a = 0; a <= n; a++)
	{
		if (n > 0 && n < 15)
		{
			for (b = 0; b <= n; b++)
			{
				c = (a * b); store_100s = c / 100;
				store_10s = (c / 10) % 10; store_1s = c % 10;
				if (c < 10)
				{
					if (b != 0)
						_putchar(' '), _putchar(' ');
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar(store_10s + '0');
					_putchar(store_1s + '0');
				}
				else
				{
					_putchar(store_100s + '0');
					_putchar(store_10s + '0');
					_putchar(store_1s + '0');
				}
				if (b < n)
					_putchar(','), _putchar(' ');
			}
			_putchar('\n');
		}
	}
}

#include "holberton.h"

/**
 * times_table - function to create times table
 *
 * Return: none
 **/
void times_table(void)
{
	int x;
	int y;
	int total;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			total = (x * y);
			if (total < 10)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(total + '0');
			}
			else
			{
				_putchar((total / 10) + '0');
				_putchar((total % 10) + '0');
			}
			if (x <= 9 && y <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

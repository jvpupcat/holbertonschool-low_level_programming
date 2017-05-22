#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - function that prints out largest prime factor
 *
 * Return: zero upon success
 **/
int main(void)
{
	unsigned long int a = 612852475143;
	unsigned long int b;

	for (b = 2; a != b; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%lu\n", b);
	return (0);
}

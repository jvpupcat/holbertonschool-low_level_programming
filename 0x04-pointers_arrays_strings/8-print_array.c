#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function that prints array
 * @a: pointer that points to the array
 * @n: number of numbers
 * Return: none
 **/
void print_array(int *a, int n)
{
	int x;

	x = n;

	for (n = 0; n < x; n++)
	{
		printf("%d", a[n]);
		if (n < x - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

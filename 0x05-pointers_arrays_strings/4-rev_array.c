#include "holberton.h"

/**
 * reverse_array - function that reverses an array
 * @a: pointer
 * @n: variable
 * Return: none
 **/
void reverse_array(int *a, int n)
{
	int temp = 0;
	int x = n - 1;

	for (x = 0; n <= x; x--, n++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}

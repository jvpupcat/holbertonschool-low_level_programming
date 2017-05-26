#include "holberton.h"

/**
 * reverse_array - function that reverses an array
 * @a: pointer
 * @n: variable
 * Return: none
 **/
void reverse_array(int *a, int n)
{
	int length = n - 1;
	int temp;

	for (n = 0; a[n] <= a[length]; length--, n++)
	{
		temp = a[length];
		a[length] = a[n];
		a[n] = temp;
	}
}

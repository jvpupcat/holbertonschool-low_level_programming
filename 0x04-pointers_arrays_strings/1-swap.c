#include "holberton.h"

/**
 * swap_int - function that swaps
 * @a: first variable
 * @b: second variable
 * Return: none
 **/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

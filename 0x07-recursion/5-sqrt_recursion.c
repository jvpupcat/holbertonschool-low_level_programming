#include "holberton.h"

/**
 * _helper - function that determines if a number is a sqrt
 * @x: s1 variable
 * @n: s2 variable
 * Return: 0 upon success
 **/
int _helper(int x, int n)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) >= n)
	{
		return (-1);
	}
	else
	{
		return (_helper(x + 1, n));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a #
 * @n: the number that passes through the function
 * Return: the natural square root
 **/
int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	n = _helper(x, n);
	return (n);
}

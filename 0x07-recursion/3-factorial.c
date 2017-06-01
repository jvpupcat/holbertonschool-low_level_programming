#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: variable that runs through function
 * Return: factorial
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

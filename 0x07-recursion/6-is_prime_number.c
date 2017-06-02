#include "holberton.h"

/**
 * prime_helper - function that checks for a prime number
 * @x: factor
 * @y: prime number
 * Return: 0 upon success
 **/
int prime_helper(int x, int y)
{
	if (y < 2 || x  % y == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (prime_helper(x + 1, y));
	}
	return (0);
}

/**
 * is_prime_number - function that checks to see if a number is prime
 * @n: variable with the integer
 * Return: prime_helper
 **/
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_helper(2, n));

}

#include <stdio.h>

/**
 * _islower - function that searches for lowercase letter
 * @c: variable that passes through if...else
 * Return: 1 if c is lowercase
 **/
int _islower(int c)
{
	int a = 'a';
	int z = 'z';

	if (c > a && c < z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

#include "holberton.h"

/**
 * _isdigit - function that checks for a digit
 * @c: variable that passes through function
 * Return: 1 upon finding a digit, 0 otherwise
 **/
int _isdigit(int c)
{
	int a = '0';
	int i = '9';

	if (c >= a && c <= i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

#include "holberton.h"

/**
 * _abs - entry point
 * @x: variable x that passes through if...else statement
 * Return: 0 upon success
 **/
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
	return (0);
}

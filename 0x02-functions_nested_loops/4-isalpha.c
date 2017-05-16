#include <stdio.h>

/**
 * _isalpha - function to search for uppercase & lowercase letters
 *
 * Return: 1 upon success
 **/
int _isalpha(int c)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	if (c > a && c < z)
	{
		return (1);
	}
	else if (c > A && c < Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

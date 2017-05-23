#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer pointing to string
 * Return: none
 **/
void rev_string(char *s)
{
	int x;
	int a;
	int temp;

	for (x = 0; s[x] != '\0'; x++)
		;
		x--;
	for (a = 0; a <= x; a++, x--)
	{
		temp = s[a];
		s[a] = s[x];
		s[x] = temp;
	}
}

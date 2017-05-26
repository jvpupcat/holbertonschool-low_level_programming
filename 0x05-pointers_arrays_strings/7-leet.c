#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @x: variable that passes through function
 * Return: character
 **/
char *leet(char *x)
{
	int a;
	int b;
	char s[] = "aeotlAEOTL";
	char t[] = "4307143071";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (x[a] == s[b])
			{
				x[a] = t[b];
			}
		}
	}
	return (x);
}

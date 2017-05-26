#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @x: pointer
 * Return: 0 upon success
 **/
char *rot13(char *x)
{
	int a;
	int b;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[b] == x[a])
			{
				x[a] = t[b];
				break;
			}
		}
	}
	return (x);
}

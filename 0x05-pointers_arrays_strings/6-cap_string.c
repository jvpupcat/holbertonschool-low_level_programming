#include "holberton.h"

/**
 * cap_string - function that capitalizes a word of a string
 * @s: pointer to array s[]
 * Return: character
 **/
char *cap_string(char *s)
{
	int a, b, c;
	char separator[] = " \t\n,;.!?\"(){}";

	for (a = 0, c = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			c = 1;
		}
		for (b = 0; separator[b] != '\0'; b++)
		{
			if (s[a] == separator[b])
			{
				c = 1;
			}
		}
		if (c != 0)
		{
			if (s[a] >= 97 && s[a] <= 122)
			{
				s[a] = s[a] - 32;
				c = 0;
			}
			else if (s[a] >= 48 && s[a] <= 57)
			{
				c = 0;
			}
			else if (s[a] >= 65 && s[a] <= 90)
			{
				;
				/*c = 0;*/
			}
		}
	}
	return (s);
}

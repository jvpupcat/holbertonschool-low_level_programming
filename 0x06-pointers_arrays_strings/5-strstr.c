#include "holberton.h"

/**
 * _strstr - function that locates a substring
 *
 *
 **/
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{	
			if (needle[y] != haystack[x + y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
	}
	return (0);
}

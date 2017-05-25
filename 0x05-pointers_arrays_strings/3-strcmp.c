#include "holberton.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 upon success
 **/
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int diff = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	if (s1[x] != s2[x])
	{
		diff = s1[x] - s2[x];
		return (diff);
	}
	return (0);
}

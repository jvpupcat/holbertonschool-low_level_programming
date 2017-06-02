#include "holberton.h"

/**
 * length - function that measures length of string
 * @s: pointer that points to string
 * Return: 0 upon success
 **/
int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + (length(s + 1)));
	}
	else
	{
		return (0);
	}
}

/**
 * _move_through - function that moves through string
 * @str: pointer that points to string
 * @x: variable that starts at beginning of string
 * @y: variable that starts at end of string
 * Return: 0 upon success
 **/
int _move_through(char *str, int x, int y)
{
	if (y >= x)
	{
		return (1);
	}
	else if (str[x] == str[y])
	{
		return (_move_through(str, x - 1, y + 1));
	}
	return (0);
}

/**
 * is_palindrome - function that determines if a sentence is a palindrome
 * @s: pointer to string
 * Return: 0 upon success
 **/
int is_palindrome(char *s)
{
	int n;

	n = length(s);
	return (_move_through(s, 0, n - 1));
}

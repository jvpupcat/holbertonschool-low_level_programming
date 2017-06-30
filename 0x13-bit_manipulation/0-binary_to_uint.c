#include "holberton.h"

/**
 * is_it_binary - function that checks to see if string is binary
 * @b: variable that runs through function
 * Return: 0 upon success, -1 if not binary
 */
int is_it_binary(const char *b)
{
	int x;

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (-1);
	}
	return (0);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: char that runs through function
 * Return: the converted number or 0 if error or NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	int bin_check, x;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	bin_check = is_it_binary(b);
	if (bin_check != 0)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		dec = dec << 1;
		if (b[x] == '1')
		{
			dec = dec + 1;
		}
	}
	return (dec);
}

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by newline
 * @separator: pointer that points to separator of string
 * @n: string that passes through function
 * Return: none
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start (list, n);
	if (separator == NULL)
	{
		separator = "";
	}
	if (n == 0)
	{
		printf("nil");
	}
	for (x = 0; x < n - 1; x++)
	{
		printf("%s%s", va_arg(list, char *), separator);
	}
	printf("%s", va_arg(list, char *));
	va_end(list);
	putchar('\n');
}

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
	char *arg;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		arg = va_arg(list, char *);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		else if (arg != NULL)
		{
			printf("%s", arg);
		}
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(list);
}

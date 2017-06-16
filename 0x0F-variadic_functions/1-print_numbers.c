#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: none
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	if (separator == NULL)
	{
		return;
	}
	va_start(list, n);
	for (x = 0; x < n - 1; x++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("%d", va_arg(list, int));
	va_end(list);
	putchar('\n');
}

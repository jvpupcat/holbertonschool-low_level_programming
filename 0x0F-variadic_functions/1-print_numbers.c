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
	int store;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		store = va_arg(list, int);
		printf("%d", store);
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(list);
}

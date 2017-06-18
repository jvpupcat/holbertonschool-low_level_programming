#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variables
 * Return: sum of all its parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, x;

	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	for (x = 0; x < n; x++)
	{
		int arg;

		arg = va_arg(list, int);
		sum += arg;
	}
	va_end(list);
	return (sum);
}

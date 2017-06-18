#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function that prints a char
 * @temp: temp
 * @list: list
 * Return: none
 */
void print_char(char *temp, va_list list)
{
	printf("%s%c", temp, va_arg(list, int));
}
/**
 * print_integer - function that returns an int
 * @temp: temp
 * @list: list
 * Return: none
 */
void print_integer(char *temp, va_list list)
{
	printf("%s%d", temp, va_arg(list, int));
}
/**
 * print_float - function that returns a float
 * @temp: temp
 * @list: list
 * Return: none
 */
void print_float(char *temp, va_list list)
{
	printf("%s%f", temp, va_arg(list, double));
}
/**
 * print_string - function that print a string
 * @temp: temp
 * @list: list
 * Return: none
 */
void print_string(char *temp, va_list list)
{
	char *ptr = va_arg(list, char *);

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s%s", temp, ptr);
}

/**
 * print_all - function that prints anything
 * @format: constant
 * @...: ellipsis
 * Return: none
 **/
void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0, y = 0;
	char *temp;

	match_t matches[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	temp = "";

	va_start(list, format);
	while (format != '\0' && format[x] != '\0')
	{
		y = 0;
		while (matches[y].find != NULL)
		{
			if (format[x] == matches[y].find[0])
			{
				matches[y].function(temp, list);
				temp = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(list);
}

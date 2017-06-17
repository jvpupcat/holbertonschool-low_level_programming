#include "variadic_functions.h"
/**
 * print_char - function that prints a char
 * @list: list
 * Return: none
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_integer - function that returns an int
 * @list: list
 * Return: none
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - function that returns a float
 * @list: list
 * Return: none
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - function that print a string
 * @list: list
 * Return: none
 */
void print_string(va_list list)
{
	char *temp = va_arg(list, char *);

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}

/**
 * print_all - check for Holberton students
 * @format: constant
 * @...: ellipsis
 * Return: none
 **/
void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0, y;
	char temp;

	match_t matches[] = {
	{'c', print_char},
	{'i', print_integer},
	{'f', print_float},
	{'s', print_string}
	};

	va_start(list, format);
	while (format && format[x] != '\0')
	{
		temp = format[x];
		y = 0;
		while (y < 4)
		{
			if (temp == matches[y].character)
			{
				matches[y].function(list);
				switch (format[x + 1])
				{
					case '\0':
						break;
					default:
						printf(", ");
						break;
				}
				break;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(list);
}

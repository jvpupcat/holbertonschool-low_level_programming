#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * find_func - function that finds a function
 * @find: find
 * @function: function
 * Return: none
 **/
typedef struct find_func {
	char *find;
	void (*function)();
} match_t;
void print_all(const char * const format, ...);
#endif

#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name being passed through function
 * @f: pointer that points to char pointer
 * Return: none
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else if (name == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}

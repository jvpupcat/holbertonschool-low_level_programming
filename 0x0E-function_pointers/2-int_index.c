#include "function_pointers.h"
#define RET_NEG_1 -1

/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to a function that is used to compare values
 * Return: 0 upon success
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (RET_NEG_1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (RET_NEG_1);
}

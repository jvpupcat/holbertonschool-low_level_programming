#include "sort.h"

/**
 * bubble_sort - function that bubble sorts
 * @array: array of numbers
 * @size: size of list
 * Return: none
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, first, second, temp_size = size;
	int temp = 0;

	if (array == NULL || size == 0 || size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < temp_size - 1; j++)
		{
			first = array[j];
			second = array[j + 1];
			if (first > second)
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

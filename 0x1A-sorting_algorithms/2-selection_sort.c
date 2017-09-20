#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the selection sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: none
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, subst;
	int temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		subst = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[subst])
				subst = j;
		}
		if (subst != i)
		{
			temp = array[i];
			array[i] = array[subst];
			array[subst] = temp;
			print_array(array, size);
		}
	}

}

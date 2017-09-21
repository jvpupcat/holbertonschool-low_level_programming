#include "sort.h"

/**
 * quick_sort_swap - function that swaps 2 ints
 * @a: first int
 * @b: second int
 * Return: none
 **/
void quick_sort_swap(int a, int b)
{
	int swap;

	swap = a;
	a = b;
	b = swap;
}

/**
 * partition - function that partitions an array
 * @array: array to partition
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: int
 **/
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	pivot = array[high];
	j = low - 1;

	for (i = low; i <= high - 1; i++)
	{
		if (array[i] < pivot)
		{
			if (array[j] != array[i])
			{
				quick_sort_swap(array[i], array[j]);
				print_array(array, size);
			}
			j++;
		}
	}
	if (pivot < array[i + 1])
	{
		quick_sort_swap(array[i + 1], array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - recursive implementation of quicksort
 * @array: array of int
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: int upon success
 **/
int quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
	return (0);
}

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algo
 * @array: array of integers
 * @size: size of array
 * Return: none
 **/
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}

#include "sort.h"

/**
 * bubble_sort - A function that uses the bubble sort
 * algorithm to sort an array
 * @array: array of integers
 * @size:  size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int less = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				less = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}

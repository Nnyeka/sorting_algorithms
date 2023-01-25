#include "sort.h"

/**
 * selection_sort - A function that sorts an array using
 * the selection sort (smallest) algorithm
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0, min_idx = 0;

	if (array == NULL || size == 0)
		return;

	/*---start from i and move after a loop---*/
	for (; i < size - 1; i++)
	{
		min_idx = i;
		/*---find the smallest---*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		/*---swap the biggest for the smallest---*/
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}

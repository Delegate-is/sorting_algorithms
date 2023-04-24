#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - algorithm sorting array in ascending order
 * Args:
 *	@array: integer array being sorted
 *	@size: size of array being sorted
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j + 1] = temp;
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}

}

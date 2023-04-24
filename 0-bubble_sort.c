#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - algorithm sorting array in ascending order
 * Args:
 * 	@array: integer array being sorted
 * 	@size: size of array being sorted
 */

void bubble_sort(int *array, size_t size)
{
	int temp;

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j + 1] = temp;
				array[j] = array[j + 1];
                		array[j + 1] = temp;
              			for (size_t k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}

}

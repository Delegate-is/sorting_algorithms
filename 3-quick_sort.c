#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap_ints(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * partition - Partitions an array using the Lomuto scheme
 * @array: Pointer to the array
 * @low: Starting index of the partition to sort
 * @high: Ending index of the partition to sort
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;

    int j;
    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            if (i != j)
            {
                swap_ints(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }

    if (i + 1 != high)
    {
        swap_ints(&array[i + 1], &array[high]);
        print_array(array, size);
    }

    return (i + 1);
}

/**
 * quicksort - Sorts a partition of an array using the Lomuto scheme
 * @array: Pointer to the array
 * @low: Starting index of the partition to sort
 * @high: Ending index of the partition to sort
 * @size: Size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot = partition(array, low, high, size);
        quicksort(array, low, pivot - 1, size);
        quicksort(array, pivot + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers using the quicksort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array && size > 1)
        quicksort(array, 0, size - 1, size);
}


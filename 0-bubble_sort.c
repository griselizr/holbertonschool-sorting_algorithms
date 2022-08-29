#include "sort.h"
/**
 *bubble_sort - sorts integers in ascending order using Bubble algorithm
 *@size: size
 *@array: data in array
 *Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int store;
	size_t i, p;

	if (array == NULL || size == 0)
		return;
	for (i = 0 ; i < size; i++)
	{
		for (p = 0; p < size - 1; p++)
		{
			if (array[p] > array[p + 1])
			{
				store = array[p];
				array[p] = array[p + 1];
				array[p + 1] = store;
				print_array(array, size);
			}
		}
	}
}

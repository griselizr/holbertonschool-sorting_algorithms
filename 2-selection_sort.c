#include "sort.h"

/**
 *selection_sort - sorts an array of integers in ascending order
 *@array: elements
 *@size:amount of elements
 *Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, com, less;
	int trade;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		less = i;
		for (com = i + 1; com < size; com++)
		{
			if (array[com] < array[less])
				less = com;
		}
		if (i != less)
		{
			trade = array[i];
			array[i] = array[less];
			array[less] = trade;
			print_array(array, size);
		}
	}
}

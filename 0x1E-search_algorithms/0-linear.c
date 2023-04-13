#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - Searches an array for a given value
 *
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched within the array
 *
 * Description: Use linear search to check the value in the array
 *
 * Return: The index of the value if found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (size == 0)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches an array for a given value
 *
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched within the array
 *
 * Description: Use jump search to check the value in the array
 *
 * Return: The index of the value if found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int prev = 0;

	if (size <= 0)
		return (-1);

	while (array[prev] < value && prev <= size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = prev + step;
	}
	if (prev <= size)
		printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);
	while (prev <= size)
	{
		if (array[prev] == value)
			return (prev);
		prev = prev + 1;
	}
	return (-1);
}

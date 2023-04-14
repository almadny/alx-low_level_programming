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
	unsigned int j;

	if (array == NULL)
		return (-1);

	while (prev < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		else if (array[prev] < value)
		{
			prev = prev + step;
		}
		else if (array[prev] > value)
		{

			printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);
			j = prev - step;

			while (j <= prev)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
				j++;
			}
		}
	}
	return (-1);
}

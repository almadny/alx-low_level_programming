#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - Searches an array for a given value
 *
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched within the array
 *
 * Description: Use linear search to check the value in the array
 *
 * Return: The index of the value if found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	unsigned int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = array[mid - 1];
		}
		else
			low = array[mid + 1];
	}
	return (-1);
}

/**
 * print_array - Print the values of an array
 *
 * @array: The array whose values will be printed
 * @low: lowest index of the array
 * @high: highest index of the array
 *
 * Description: Iterate through the array to print all its value
 * Return: Nothing
 */
void print_array(int *array, unsigned int low, unsigned int high)
{
	unsigned int i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		if (i < high)
		{
			printf("%d, ", array[i]);
		}
		else
			printf("%d\n", array[i]);
	}
}

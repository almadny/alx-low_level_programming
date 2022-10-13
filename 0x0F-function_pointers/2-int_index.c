#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - calls name to print the name sent
 * @array: array to be executed
 * @size: size of the array.
 * @cmp: function to be executed on each ele
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

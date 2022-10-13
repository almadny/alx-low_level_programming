#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - calls name to print the name sent
 * @array: array to be executed
 * @size: size of the array.
 * @action: functiin to be executed on each ele
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

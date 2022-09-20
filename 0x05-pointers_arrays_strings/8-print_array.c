#include <stdio.h>
#include "main.h"
/**
 * print_array - Print specific elements of an array
 * @a: The array that contains the elements
 * @n: The number of elements to be printed
 *
 * Description: Prints certain number of elements from an array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (a[j] = 0; j <= n; j++)
	{
		printf("%d, ", a[j]);
	}
	printf('\n');
}


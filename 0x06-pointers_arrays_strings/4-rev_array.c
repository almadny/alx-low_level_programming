#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse arrays
 *
 * @a: The string to be added to
 * @n: The string to be added
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}

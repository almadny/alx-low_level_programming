#include "main.h"
/**
 * swap_int - swap two mumbers
 * @a:first Parameter to swap
 * @b: second parameter to swap
 *
 * Description: Receives a variable, conert its value to 98.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

#include "main.h"
#include <string.h>
/**
 * factorial - Prints strings using recursion
 * @n: String to print
 * Description:recursion to find the factorial of a number
 *
 * Return: factorial of the number as int
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}

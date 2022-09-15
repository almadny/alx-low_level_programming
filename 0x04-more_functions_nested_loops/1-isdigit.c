#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks if a letter is uppercase
 *
 * @c: The letter supplied for checking
 *
 * Description:  The function uses the standard library fuction to check
 *
 * Return: Returns 1 for success,
 * 0 for failure.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

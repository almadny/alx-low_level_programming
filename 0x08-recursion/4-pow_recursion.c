#include "main.h"
#include <string.h>
/**
 * _pow_recursion - Prints power of a no  using recursion
 * @x: Base number
 * @y: Power
 * Description:using recursion to find the power of a number
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
	else
		return (-1);
}

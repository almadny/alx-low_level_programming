#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Array
 * @b: Byte to use
 * @n: number of characters to substitute
 *
 * Description: Changes the 0 to n chars to the char b
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *m;
	unsigned char n;

	m = s;
	n = b;
	for (i = 0; i <= n; i++)
	{
		m[i] = b;
	}
	return (m);
}

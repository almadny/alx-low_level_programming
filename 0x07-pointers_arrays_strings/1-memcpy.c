#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: Array
 * @src: Byte to use
 * @n: number of characters to substitute
 *
 * Description: Changes the 0 to n chars to the char b
 * Return: Pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

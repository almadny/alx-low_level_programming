#include "main.h"
#include <unistd.h>
/**
 * rev_string - Print a string in reverse
 * @s: string to be reversed
 * Description: Print a string in reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, k;
	int len;
	char c;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = len - 1, k = 0; j >= len / 2; j--, k++)
	{
		c = s[k];
		s[k] = s[j];
		s[j] = c;
	}
}

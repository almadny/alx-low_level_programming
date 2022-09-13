#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 *
 * &alp: character that represents the alphabets
 *
 * description:A function that prints lowercase letters a to z 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alp;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * &alp: character that represents the alphabets
 *
 * description:A function that prints lowercase letters a to z
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}

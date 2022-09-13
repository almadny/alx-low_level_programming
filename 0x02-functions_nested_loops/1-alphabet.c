#include "main.h"
/**
 * print_alphabet: Prints alphabets in lowercase
 *
 * &alp: character that represents the alphabets
 *
 * Description: A function that prints lowercase letters a to z
 * Return: Void
 */
void print_alphabet(void)
{
	char alp;
	
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
		_putchar('\n');
	}
}

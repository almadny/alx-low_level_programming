#include "main.h"

/**
 * jack_bauer - Prints all minutes in a song
 *
 * Description: Prints every second of a song
 *
 * Return: none
 */
void jack_bauer(void)
{
	int m_s, m_n;

	for (m_s = 0; m_s <= 23; m_s++)
	{
		for (m_n = 0; m_n <= 59; m_n++)
		{
			_putchar((m_s / 10) + '0');
			_putchar((m_s % 10) + '0');
			_putchar(':');
			_putchar((m_n / 10) + '0');
			_putchar((m_n % 10) + '0');
			_putchar('\n');
		}
	}
}

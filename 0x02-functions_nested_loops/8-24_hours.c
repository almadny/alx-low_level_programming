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
	int m_s, m_n, s_s, s_n;

	for (m_s = 0; m_s <= 2; m_s++)
	{
		for (m_n = 0; m_n <= 3; m_n++)
		{
			for (s_s = 0; s_s <= 5; s_s++)
			{
				for (s_n = 0; s_n <= 9; s_n++)
				{
					_putchar(m_s);
					_putchar(m_n);
					_putchar(':');
					_putchar(s_s);
					_putchar(s_n);
					_putchar('\n');
				}
			}
		}
}

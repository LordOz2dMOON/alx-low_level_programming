#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int m, h;

	for (m = 0; m <= 23; m++)
	{
		for (h = 0; h <= 59; h++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar('\n');
		}
	}
}

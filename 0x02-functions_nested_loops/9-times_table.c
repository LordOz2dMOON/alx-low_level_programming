#include "main.h"

/**
 * times_table - print the 9 times table starting from 0
 * Return: void
 */
void times_table(void)
{
	int t = 0;
	int b;
	int c;

	while (t <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = t * b;

			if (b == 0)
			{
				_putchar('0' + c);
			} else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		t++;
	}
}

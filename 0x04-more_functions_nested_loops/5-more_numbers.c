#include "main.h"

/**
 * more_numbers - print from 0 - 14 x 10 times
 * Return: void
 */
void more_numbers(void)
{
	char a, b;
	int t = 0;

	while (t < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;

			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar ('0' + c);
		}
		_putchar('\n');
		t++;
	}
}

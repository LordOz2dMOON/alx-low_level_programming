#include "main.h"

/**
 * more_numbers - print from 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int t;

	for (t = 0; t <= 10; t++)
	{
		int d;

		for (d = 0; d <= 14; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}

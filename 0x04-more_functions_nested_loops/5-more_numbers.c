#include "main.h"

/**
 * more_numbers - print from 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int t;

	while (t <= 10)
	{
		char f;

		for (f = 0; f <= 14; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

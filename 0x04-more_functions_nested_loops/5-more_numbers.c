#include "main.h"

/**
 * more_numbers - print from 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int t = 0;
	char f;

	while (t <= 10)
	{
		for (f = 0; f <= 14; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 * excluding 2 and 4
 *
 * Returns: void
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue
		}
		_putchar(n);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 * excluding 2 and 4
 *
 * Returns: void
 */
void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if ((n == 2 || n == 4))
		{
			continue;
		}
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}

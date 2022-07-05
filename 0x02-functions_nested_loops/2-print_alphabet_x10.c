#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lowercase alphabet
 *
 * Return - Always 0: (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char l;

		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

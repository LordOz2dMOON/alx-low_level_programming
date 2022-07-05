#include "main.h"

/**
 * print_alphabet - Function that prints small letters of the alphabet
 *
 * Return: Always 0: (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

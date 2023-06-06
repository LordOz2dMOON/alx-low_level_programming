#include "main.h"

/**
 *print_alphabet -function that prints the alphabet, in lowercase and new line
 *Return: Return (0)
 */
void print_alphabet(void)
{
	char l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}

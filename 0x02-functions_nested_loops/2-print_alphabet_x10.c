#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet 10 times
 *Return: Return (0)
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
	}
}

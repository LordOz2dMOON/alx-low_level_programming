#include <stdio.h>

/**
 *main - print alphabet in lowercase followed by a new line
 *Return: Return 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar(\n);

	return (0);
}

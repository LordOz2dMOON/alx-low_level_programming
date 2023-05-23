#include <stdio.h>

/**
 *main - print lowercase alphabet omitting e and q
 *Return: Return 0
 */
int main(void)
{
	char sLetter = 'a';

	while (sLetter <= 'z')
	{
		if (sLetter != 'e' && sLetter != 'q')
		{
			putchar(sLetter);
		}
		sLetter++;
	}
	putchar('\n');

	return (0);
}

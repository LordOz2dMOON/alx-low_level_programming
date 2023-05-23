#include <stdio.h>

/**
 *main - print alphabet in lowercase then uppercase
 *Return: Return 0
 */
int main(void)
{
	char sLetter = 'a';
	char bLetter = 'A';

	while (sLetter <= 'z')
	{
		putchar(sLetter);
		sLetter++;
	}
	while (bLetter <= 'Z')
	{
		putchar(bLetter);
		bLetter++;
	}
	putchar('\n');

	return (0);
}

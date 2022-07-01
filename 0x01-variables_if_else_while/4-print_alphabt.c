#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	for (e = 'a'; e<= 'z'; e++)
	{
		if (e == 'q')
		continue;
		else if (e == 'e')
		continue;
		putchar(e);
	}
	putchar('\n');
	return (0);
}

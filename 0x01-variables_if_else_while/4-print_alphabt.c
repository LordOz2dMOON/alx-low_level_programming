#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	while (e <= 'z')
	{
		if (e != 'q' && e != 'e')
		{
			putchar(e);
		}
		e++;
	}
	putchar('\n');
	return (0);
}

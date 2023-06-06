#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 * Return: Return (0)
 */

int main(void)
{
	int i = 0;
	char word[] = "_putchar";
	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	Return (0);
}

#include <stdio.h>

/**
 *main - print all all single digit numbers of base 10 starting from 0.
 *Return: Return 0
 */
int main(void)
{
	int i = 0;

	while (i != 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}

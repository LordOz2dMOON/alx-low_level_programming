#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print all natural number from n to 98
 *
 * @n: collects and hold the integer
 *
 * Return: returns all natural numbers from n to 98
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}

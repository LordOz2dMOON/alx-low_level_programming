#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function that prints all natural numbers from n to 98,
 *plus a new line
 *@n: number to start printing for
 *Return: Return all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else if (n == 98)
		printf("%d", n);
	printf("\n");
}

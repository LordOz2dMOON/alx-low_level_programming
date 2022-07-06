#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: collect and hold the integer
 *
 * Return: return the last digit of the number
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

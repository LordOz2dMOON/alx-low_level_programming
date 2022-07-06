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
	int lsdgt;

	lsdgt = n % 10;

	if (lsdgt < 0)
	lsdgt = lsdgt * -1;
	_putchar(lsdgt + '0');
	return (lsdgt);
}

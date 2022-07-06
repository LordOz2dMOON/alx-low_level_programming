#include "main.h"

/*
 * sign- print the sign of a number
 *
 * @n: Collects an integer n
 *
 * Return - Always 0: (Success)
 */
int print_sign(int n)
{

	if(n > 0)
	{
		_putchar('+')
		return (1);
	} else if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

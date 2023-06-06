#include "main.h"
/**
 *print_sign -  function that prints the sign of a number
 *@n: sign to be checked
 *Return: Return 1 if greater than 0, 0 if it's zero
 *and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}

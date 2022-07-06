#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *
 *Return: Returns the absolute value of the integer
 *
 *@n: collects and stores the integer
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}

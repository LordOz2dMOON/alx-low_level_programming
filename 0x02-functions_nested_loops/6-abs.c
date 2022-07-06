#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: returns the absolute value of integer
 *
 *@n: collects and holds the integer value
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);	
}

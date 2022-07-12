#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a : stores a pointer of an int
 * @b : stores a pointer of an int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

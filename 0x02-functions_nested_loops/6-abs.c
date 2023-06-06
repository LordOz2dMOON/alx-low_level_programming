#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@i: number to return abs value
 *Return: Return absolute value of int
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
	return (0);
}

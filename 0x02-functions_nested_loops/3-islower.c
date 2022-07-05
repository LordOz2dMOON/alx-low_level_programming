#include "main.h"

/**
 * _islower - check if the alphabet is lowercase.
 *
 *@c: collects and stores an integer.
 *
 * Return: On success 1.
 * On error: 0 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	{
		return (0);
	}
}

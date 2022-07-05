#include "main.h"

/**
 * islower - check if the alphabet is lowercase
 *
 * Return - Always 0: (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return 1;
	else
	{
		return 0;
	}
}

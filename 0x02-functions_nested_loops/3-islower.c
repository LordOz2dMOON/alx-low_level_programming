#include "main.h"

/**
 * _islower - check if the alphabet is lowercase
 *
 * Return - Always 0: (Success)
 */
int _islower(int c/*collect an integer c and check it*/)
{
	if (c >= 'a' && c <= 'z')
	/*return 1 if its a lowercase letter*/
	return (1);
	else
	{	/*return 0 if its not lowercase*/
		return (0);
	}
}

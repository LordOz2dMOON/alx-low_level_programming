#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: holds the character
 *
 * Return: on Success 1
 * On error: return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	{
		return (0);
	}
}

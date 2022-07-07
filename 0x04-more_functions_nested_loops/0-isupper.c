#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: holds the character
 * Return: on Success 1 and on failure 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

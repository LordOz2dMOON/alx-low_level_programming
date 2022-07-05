#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 *
 * @c: collects and stores a character
 *
 * Return: On success 1
 * On error: 0 is returned
 */
int _isalpha(int c)
{
	if (c >= 'A' || 'a' && c <= 'Z' || 'z')
	return (1);
	else
	{
		return (0);
	}
}

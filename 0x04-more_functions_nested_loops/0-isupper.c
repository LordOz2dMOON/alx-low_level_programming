#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: takes the character
 *Return: On succes 1
 *On error return 0
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

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		count++;
		s++;
		_strlen_recursion(s);
	}
	return (0);
}

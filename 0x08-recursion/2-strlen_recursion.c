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
		return (0);
	}
	s++;
	_strlen_recursion(s);
	count += 1;
	return (0);
}

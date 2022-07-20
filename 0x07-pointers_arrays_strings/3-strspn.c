#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, count;

	while (i)
	{
		while (accept[i] == s[i])
		{
			count += 1;
			i++;
		}
		if (accept[i] != s[i])
			break;
	}
	return (count);
}

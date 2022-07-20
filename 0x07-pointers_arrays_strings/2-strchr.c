#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to a character
 * @c: character
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (i < strlen(s))
	{
		if (*(s + i) == c)
		{
			while (i != '\0')
			{
				return (*(s + i));
				i++;
			}
		}
		else if (s[i] == '\0')
			break;
		else if (s[i] != c)
			continue;
		i++;
	}
	return ('\0');
}

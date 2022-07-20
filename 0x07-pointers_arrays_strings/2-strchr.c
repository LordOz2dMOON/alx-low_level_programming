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
	char null[] = "NULL";
	char j[];

	i = 0;
	while (s[i] < strlen(s))
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				j = _putchar (*(s + i));
				return (j);
				i++;
			}

		} else if (s[i] != c && s[i] != '\0')
		{
			continue;
		} else if (s[i] == '\0')
		{
			return (null);
		}
		i++;
	}
}

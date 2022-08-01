#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: string
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int length = sizeof(cpy)/sizeof(cpy[0]);

	if (str == NULL)
		return (NULL);
	cpy = malloc(strlen(str) + 1 * sizeof(char));
	if (cpy != NULL)
	{
		for (i = 0; i < length; i++)
			cpy[i] = str[i];
		return (cpy);
	} else
		return (NULL);
	return (0);
}

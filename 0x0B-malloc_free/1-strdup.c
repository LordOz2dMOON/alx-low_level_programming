#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 */
char *_strdup(char *str)
{
	char *cpy;
	
	cpy = malloc(strlen(str) + 1 * sizeof(char));
	if (cpy != NULL)
	{
		cpy = str;
		return (cpy);
		free(cpy);
	}
	return (0);
}

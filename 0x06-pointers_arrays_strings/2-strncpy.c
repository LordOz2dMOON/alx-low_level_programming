#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer to a character
 * @src: pointetr to a character
 * @n: integer
 * Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

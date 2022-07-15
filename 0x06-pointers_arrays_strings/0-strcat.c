#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: returns a string
 */
char *_strcat(char *dest, char *src)
{
	char *word = strcat(*dest, *src);

	return (word);
}

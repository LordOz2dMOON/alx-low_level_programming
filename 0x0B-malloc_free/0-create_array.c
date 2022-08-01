#include <stdlib.h>
#include "main.h"
#include "string.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: integer
 * @c: character
 * Return: characters
 */
char *create_array(unsigned int size, char c)
{
	char *wrd;
	int i;

	if (size == 0)
		return (NULL);
		wrd = malloc(sizeof(char) * size);
		if (wrd != NULL)
		{
			for (i = 0; i < size; i++)
				wrd[i] = c;
			return (wrd);
		}
	return (0);

}

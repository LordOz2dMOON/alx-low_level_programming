#include <stdio.h>

/**
 *main - print to standard error with fwrite function
 *Return: Return 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\"
		- Dora Korpar, 2015-10-19";
	fwrite(message, 1, strlen(message), stderr);
}

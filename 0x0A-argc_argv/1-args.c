#include <stdio.h>

/**
 * main - prints the number of arguements passed to it
 * @argc: number of arguements passed
 * @argv: array of arguements passed
 * Return: integer
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

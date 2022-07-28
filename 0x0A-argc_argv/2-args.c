#include <stdio.h>

/**
 * main - print all arguements
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: string
 */
int main (int argc, char *argv[])
{
	int i = 0;
	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}

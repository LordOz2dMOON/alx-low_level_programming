#include <stdio.h>

/**
 *main - print  all possible combinations of single-digit numbers
 *Return: Return 0
 */
int main(void)
{
	int i = 48;
	while (i != 58)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
		}
		else if(i == 57)
		{
			putchar(i);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return 0;
}

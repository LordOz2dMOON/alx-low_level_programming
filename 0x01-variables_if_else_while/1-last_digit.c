#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld = n % 10;
	/* your code goes there*/
	if ( ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else if (ld == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ld);
	} else if (ld < 6 && ld !=0)
	{
		printf("Last digit of %d is %d and is less then six and not zero\n", n, ld);
	}

	return (0);
}


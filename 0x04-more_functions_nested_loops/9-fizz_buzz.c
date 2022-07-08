#include <stdio.h>

/**
 * FizzBuzz - prints from 1 to 100, replaces
 * multiples of 3,5 and 3 and 5 with Fizz, Buzz
 * and FizzBuzz
 */
void FizzBuzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		printf("%i ", i);
	}
	printf("\n");

	return (0);
}

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
			char fb[] = "FizzBuzz";

			printf("%s", fb);
		} else if (i % 3 == 0)
		{
			char f[] = "Fizz";

			printf("%s", f);
		} else if (i % 5 == 0)
		{
			char b[] = "Buzz";

			printf("%s", b);
		}
		printf("%i ", i);
	}
	printf("\n");

	return (0);
}

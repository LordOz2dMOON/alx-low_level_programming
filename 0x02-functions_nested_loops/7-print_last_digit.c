#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *@i: number to print last digit
 *Return: Return last digit of number
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	_putchar(last_digit);
	return (0);
}

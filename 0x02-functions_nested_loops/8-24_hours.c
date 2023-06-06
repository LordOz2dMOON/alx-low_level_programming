#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int maxMinutes = 1440;
	int hourFirstDigit = 0;
	int hourSecondDigit = 0;
	int minuteFirstDigit = 0;
	int minuteSecondDigit = 0;
	int currentMinute = 0;

	while (currentMinute < maxMinutes)
	{
		_putchar(hourFirstDigit + '0');
		_putchar(hourSecondDigit + '0');
		_putchar(':');
		_putchar(minuteFirstDigit + '0');
		_putchar(minuteSecondDigit + '0');
		_putchar('\n');

		minuteSecondDigit++;
		if (minuteSecondDigit > 9)
		{
			minuteSecondDigit = 0;
			minuteFirstDigit++;
		}
		if (minuteFirstDigit > 5)
		{
			minuteFirstDigit = 0;
			hourSecondDigit++;
		}
		if (hourSecondDigit > 9)
		{
			hourSecondDigit = 0;
			hourFirstDigit++;
		}
		currentMinute++;

	}
}

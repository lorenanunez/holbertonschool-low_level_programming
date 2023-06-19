#include "main.h"

/**
 * jack_bauer - Exercise 8 function
 *
 * Description: Prints all hours and minutes
 *
 * Return: Always null
*/

void jack_bauer(void)
{
	int minutes;
	int hours;
	int firstDigit;
	int secondDigit;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(48 + hours);
			}
			else
			{
				firstDigit = hours / 10;
				secondDigit = hours % 10;
				_putchar(48 + firstDigit);
				_putchar(48 + secondDigit);
			}
			_putchar(':');
			if (minutes < 10)
			{
				_putchar('0');
				_putchar(48 + minutes);
			}
			else
			{
				firstDigit = minutes / 10;
				secondDigit = minutes % 10;
				_putchar(48 + firstDigit);
				_putchar(48 + secondDigit);
			}
			_putchar('\n');
		}
	}
}

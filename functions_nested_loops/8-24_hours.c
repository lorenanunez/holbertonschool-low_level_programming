#include "main.h"

/**
 * print_last:_digit - Exercise 7 function
 * @num: Integer to print the last digit
 * Description: Gives last digit of num
 *
 * Return: Value of the last digit (0)
*/

void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
			}
			_putchar(48 + hours);
			_putchar(':');
			if (minutes < 10)
			{
				_putchar('0');
			}
			_putchar(48 + minutes);
		}
	}
}

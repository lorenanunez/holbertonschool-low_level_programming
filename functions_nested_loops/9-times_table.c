#include "main.h"

/**
 * times_table - Exercise 9 function
 *
 * Description: Prints the 9 times table
 *
 * Return: Always null
*/

void times_table(void)
{
	int i, multiplier, result, firstDigit, secondDigit;

	for (i = 0; i < 10; i++)
	{
		for (multiplier = 0; multiplier < 10; multiplier++)
		{
			result = i * multiplier;
			if (result >= 10)
			{
				if (multiplier > 0)
				{
					putchar(',');
					putchar(' ');
				}
				firstDigit = result / 10;
				secondDigit = result % 10;
				putchar(48 + firstDigit);
				putchar(48 + secondDigit);
			}
			else
			{
				if (multiplier > 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				putchar(48 + result);
			}
		}
		putchar('\n');
	}
}

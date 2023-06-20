#include "main.h"

/**
 * more_numbers - Exercise 4 function
 *
 * Description: Prints the numbers from 0 to 14
 * 10 times
 *
 * Return: Always null
*/

void more_numbers(void)
{
	int i, x, firstDigit, secondDigit;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			firstDigit = x / 10;
			secondDigit = x % 10;
			if (firstDigit != 0)
			{
				putchar(48 + firstDigit);
			}
			putchar(48 + secondDigit);
		}
		putchar('\n');
	}
}

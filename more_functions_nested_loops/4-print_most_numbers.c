#include "main.h"

/**
 * print_most_numbers - Exercise 4 function
 *
 * Description: Prints the numbers from 0 to 9
 * except 2 and 4
 *
 * Return: Always null
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(48 + i);
		}
	}

	putchar('\n');
}

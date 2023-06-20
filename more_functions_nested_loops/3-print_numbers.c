#include "main.h"

/**
 * print_numbers - Exercise 3 function
 *
 * Description: Prints the numbers from 0 to 9
 *
 * Return: 1 if digit, otherwise 0
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
}

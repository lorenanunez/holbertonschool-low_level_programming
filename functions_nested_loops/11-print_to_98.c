#include "main.h"

/**
 * print_to_98 - Exercise 11 function
 * @n: The natural number to print from
 * Description: Prints all natural numbers from n to 98
 *
 * Return: Always null
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}

	putchar('\n');
}

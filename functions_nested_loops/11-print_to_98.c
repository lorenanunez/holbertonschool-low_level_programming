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
	while (n <= 98)
	{
		if (n < 10)
		{
			putchar(48 + n);
		}
		else
		{
			putchar(48 + (n / 10));
			putchar(48 + (n % 10));
		}
		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
}

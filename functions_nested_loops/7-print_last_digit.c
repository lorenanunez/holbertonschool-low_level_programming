#include "main.h"

/**
 * print_last_digit - Exercise 7 function
 * @num: Integer to print the last digit
 * Description: Gives last digit of num
 *
 * Return: Value of the last digit (0)
*/

int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(48 + r);
	return (r);
}

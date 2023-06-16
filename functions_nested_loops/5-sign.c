#include "main.h"

/**
 * print_sign - Exercise 5 function
 * 
 * @parametern: Character to print the sign
 *
 * Description: Exercise #5 function
 *
 * Return: Always null
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

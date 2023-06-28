#include "main.h"

/**
 * factorial - Exercise #3 function
 *
 * @n: The number to calculate the factorial
 *
 * Description: Calculates the factorial of
 * a number.
 *
 * Return: Factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}

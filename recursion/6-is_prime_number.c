#include "main.h"

/**
 * calculate - Helper function to exercise
 * nº 6 function.
 *
 * @n: The number to check if it is prime
 * @d: A divisor to check against if its
 * prime or not.
 *
 * Description: Helps exercise #6 function
 * to check if the number is prime or not
 *
 * Return: 1 if its prime, otherwise 0
*/

int calculate(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	else
	{
		if (n % d == 0)
		{
			return (0);
		}
		else
		{
			return (calculate(n, d - 1));
		}
	}
}

/**
 * is_prime_number - Exercise #6 function
 *
 * @n: The number to check if it is prime
 *
 * Description: Calculates if a number
 * is prime or not;
 *
 * Return: 1 if true, otherwise 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (calculate(n, n - 1));
	}
}

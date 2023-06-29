#include "main.h"

/**
 * calculate - Exercise #5 function helper
 *
 * @n: The number to calculate the square root
 * @min: The minimum value to guess
 * @max: The max value to guess
 *
 * Description: Helps exercise #5 function to
 * calculate the square root of a number.
 *
 * Return: The square root of a number. If it
 * does not have a natural square root, it
 * returns -1.
*/

int calculate(int n, int min, int max)
{
	long guess;
	long guess_powered;

	if (max < min)
	{
		return (-1);
	}
	guess = (min + max) / 2;
	guess_powered = guess * guess;
	if (guess_powered == n)
	{
		return ((int) guess);
	}
	else if (guess_powered < n)
	{
		return (calculate(n, guess + 1, max));
	}
	else
	{
		return (calculate(n, min, guess - 1));
	}
}

/**
 * _sqrt_recursion - Exercise #5 function
 *
 * @n: The number to calculate the square root
 *
 * Description: Calculates the square root of
 * an integer.
 *
 * Return: The square root of a number. If it
 * does not have a natural square root, it
 * returns -1.
*/

int _sqrt_recursion(int n)
{
	return (calculate(n, 1, n));
}
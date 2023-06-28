#include "main.h"

/**
 * _pow_recursion - Exercise #4 function
 *
 * @x: The base
 * @y: The exponent
 *
 * Description: Calculates x t the power of y
 *
 * Return: x to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1 / (x * _pow_recursion(x, -y - 1)));
	}
}

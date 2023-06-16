#include "main.h"

/**
 * _islower - Exercise 4 function
 * @c: Integer to determinate if is lower or upper
 * Description: Exercise #4 function
 *
 * Return: Always null
*/

int _islower(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

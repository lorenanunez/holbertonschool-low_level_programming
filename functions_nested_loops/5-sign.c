#include "main.h"

/**
 * _islower - Exercise 5 function
 *
 * Description: Exercise #5 function
 *
 * Return: Always null
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n < 0)
	{
		printf("-\n");
		return (-1);
	}
	else {
		printf("0\n");
		return (0);
	}
}

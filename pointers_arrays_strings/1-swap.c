#include "main.h"

/**
 * swap_int - Exercise #1 function
 * @a: The first value
 * @b: The second value
 * Description: swaps the values of two integers
 *
 * Return: Always null (void)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

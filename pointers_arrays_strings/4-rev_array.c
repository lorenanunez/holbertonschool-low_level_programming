#include "main.h"

/**
 * _strcmp - Exercise #4 function
 *
 * @a: The array of integers
 * @n: The number of elements of the array
 *
 * Description: Reverses an array of integers
 *
 * Return: Always void
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

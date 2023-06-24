#include "main.h"

/**
 * print_array - Exercise #8 function
 * @a: The array itself
 * @n: The number of elements to print
 * Description: prints n elements of an
 * array of integers, followed by a new line
 *
 * Return: Always void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

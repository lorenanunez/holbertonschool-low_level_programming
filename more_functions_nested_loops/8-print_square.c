#include "main.h"

/**
 * print_diagonal - Exercise 8 function
 * @size: The size of the square
 * Description: Prints a square, followed by a new line
 *
 * Return: Always null
*/

void print_square(int size)
{
	int i, x;

	if (size < 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				putchar('#');
			}
			putchar('\n');
		}	
	}
	else
	{
		putchar('\n');
	}
}

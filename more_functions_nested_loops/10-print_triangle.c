#include "main.h"

/**
 * print_triangle - Exercise 10 function
 * @size: The size of the triangle
 * Description: Print a triangle
 *
 * Return: Always null
*/

void print_triangle(int size)
{
	int i, x, spaces, blocks;

	if (size > 0)
	{
		blocks = 0;
		for (i = 0; i < size; i++)
		{
			spaces = size - i;
			while (spaces > 1)
			{
				putchar(' ');
				spaces--;
			}
			while (blocks <= i)
			{
				for (x = 0; x <= blocks; x++)
				{
					putchar('#');
				}
				blocks++;
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

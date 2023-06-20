#include "main.h"

/**
 * print_diagonal - Exercise 7 function
 * @height: The height of the line in characters
 * Description: Draws a diagonal line on the terminal
 *
 * Return: Always null
*/

void print_diagonal(int height)
{
	int i, x, spaces;

	if (height > 0)
	{
		spaces = 0;
		for (i = 0; i < height; i++)
		{
			while (spaces <= height)
			{
				for (x = 0; x < spaces; x++)
				{
					putchar(' ');
				}
				spaces++;
				putchar('\\');
				putchar('\n');
			}
		}
	}
	else
	{
		putchar('\n');
	}
}

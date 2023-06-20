#include "main.h"

/**
 * print_line - Exercise 6 function
 * @length: The length of the line in characters
 * Description: Draws a straight line in the terminal
 *
 * Return: Always null
*/

void print_line(int length)
{
	int i;

	if (length > 0)
	{
		for (i = 0; i < length; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}

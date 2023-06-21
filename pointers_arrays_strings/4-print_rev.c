#include "main.h"

/**
 * print_rev - Exercise #4 function
 * @s: The string to reverse
 * Description: Prints a string, in reverse
 *
 * Return: Always void
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0 / 2; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

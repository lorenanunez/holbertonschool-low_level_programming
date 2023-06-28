#include "main.h"

/**
 * _puts_recursion - Exercise #0 function
 *
 * Description: Prints a stirng followed by
 * a new line.
 *
 * Return: Always void
*/

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < (int) strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

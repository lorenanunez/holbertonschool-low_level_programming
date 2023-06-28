#include "main.h"

/**
 * _print_rev_recursion - Exercise #1 function
 *
 * @s: The string to print in reverse
 *
 * Description: Prints a stirng in reverse,
 * followed by a new line.
 *
 * Return: Always void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

#include "main.h"

/**
 * _puts_recursion - Exercise #0 function
 * 
 * @s: The string to print
 * 
 * Description: Prints a stirng followed by
 * a new line.
 *
 * Return: Always void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		putchar('\n');
	}
}

#include "main.h"

/**
 * puts_half - Exercise #7 function
 * @str: The string to print the half
 * Description: Prints half of the string
 *
 * Return: Always void
*/

void puts_half(char *str)
{
	int i;

	for (i = (strlen(str) - 1) / 2; i < (int) strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

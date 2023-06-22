#include "main.h"

/**
 * puts2 - Exercise #6 function
 * @str: The string to print other digits
 * Description: Print other digits of string
 *
 * Return: Always void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i+= 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

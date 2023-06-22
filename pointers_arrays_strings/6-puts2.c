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

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] >= 48 && str[i] <= 57 && str[i] % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}

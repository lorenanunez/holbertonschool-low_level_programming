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
	int lenght;

	lenght = strlen(str);
	i = (lenght % 2 == 0) ? lenght / 2 : (lenght + 1) / 2;
	while (i < lenght)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

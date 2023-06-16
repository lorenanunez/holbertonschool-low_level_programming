#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Exercise 1 function
 *
 * Description: Exercise #1 function
 *
 * Return: Always null
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

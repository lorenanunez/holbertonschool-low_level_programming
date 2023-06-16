#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Exercise #1 function
 *
 * Return: Always 0 (Success)
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

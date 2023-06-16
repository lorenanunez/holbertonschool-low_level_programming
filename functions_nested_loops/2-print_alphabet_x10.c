#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Exercise 2 function
 *
 * Description: Exercise #2 function
 *
 * Return: Always null
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;
	
	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar("\n");
	}
}

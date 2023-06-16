#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Exercise #1 function
 *
 * Return: Always 0 (Success)
*/

void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

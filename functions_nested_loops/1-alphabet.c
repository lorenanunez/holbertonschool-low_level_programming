#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Main function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

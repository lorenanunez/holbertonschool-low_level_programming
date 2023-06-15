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
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

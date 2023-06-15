#include <stdlib.h>
#include <time.h>
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
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		puts(n + "is positive");
	}
	else if (n < 0)
	{
		puts(n + "is negative");
	}
	else
	{
		puts("is zero");
	}
	
	return (0);
}

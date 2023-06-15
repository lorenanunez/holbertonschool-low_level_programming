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
		printf("%s\n", n);
		printf(" is positive\n");
	}
	else if (n < 0)
	{
		printf("%s\n", n);
		printf(" is negative\n");
	}
	else
	{
		printf("0 is zero\n");
	}
	
	return (0);
}

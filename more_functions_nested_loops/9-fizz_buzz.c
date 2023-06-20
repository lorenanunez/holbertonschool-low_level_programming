#include "main.h"

/**
 * main - Exercise 9 function
 *
 * Description: Prints from 1 to 100. But for multiples
 * of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 *
 * Return: Always null
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
			{
				putchar(' '); // Really checker? ¬¬
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}

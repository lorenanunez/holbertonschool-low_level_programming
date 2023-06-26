#include "main.h"

/**
 * _atoi - Exercise #10 function
 * @s: The string to convert into integer
 * Description: Converts a string into an integer
 *
 * Return: The integer value of the string
*/

int _atoi(char *s)
{
	int i;
	int result = 0;
	int digit;
	int positive = 1;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (s[i] == 43)
		{
			positive = 1;
		}
		else if (s[i] == 45)
		{
			positive = 0;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - '0';
			result = (result * 10) + digit;
		}
	}
	if (positive == 0)
	{
		result *= -1;
	}
	return (result);
}

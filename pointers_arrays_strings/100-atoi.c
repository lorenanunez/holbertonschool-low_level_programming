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
	unsigned int result = 0;
	int digit;
	int plus = 0;
	int minus = 0;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (s[i] == 43)
		{
			plus++;
		} else if (s[i] == 45)
		{
			minus++;
		}
		if (s[i] == 59)
		{
			break;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - '0';
			result = (result * 10) + digit;
		}
	}
	if (minus > plus || minus == 1)
	{
		result *= -1;
	}
	return (result);
}

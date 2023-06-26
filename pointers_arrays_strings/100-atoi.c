#include "main.h"

/**
 * _atoi - Exercise #10 function
 * @s: The string to convert into integer
 * Description: Converts a string into an integer
 *
 * Return: The integer value of the string
*/

int main(void)
{
	int n;

	n = _atoi("-2147483648");
	printf("%d\n", n);
	return (0);
}

int _atoi(char *s)
{
	int i;
	unsigned int result = 0;
	int digit;
	int positive = 1;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (s[i] == 59)
		{
			break;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i] > 0 && s[i - 1] == 45)
			{
				positive = 0;
			}
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

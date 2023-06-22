#include "main.h"

/**
 * rev_string - Exercise #5 function
 * @s: The string to reverse
 * Description: Reverses a string
 *
 * Return: The reversed string
*/

void rev_string(char *s)
{
	char c;
	int i;

	for (i = 0; i < ((int) strlen(s)) / 2; i++)
	{
		c = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = s[i];
		s[i] = c;
	}
}
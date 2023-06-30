#include "main.h"

/**
 * _strcmp - Exercise #3 function
 *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description: Compares two strings
 *
 * Return: 0 if the strings are equal, -1 if s1 is lower
 * than s2, otherwise 1;
*/

int _strcmp(char *s1, char *s2)
{
	int s1sum = 0;
	int s2sum = 0;
	int i;

	for (i = 0; i < (int) strlen(s1); i++)
	{
		s1sum += s1[i];
	}
	for (i = 0; i < (int) strlen(s2); i++)
	{
		s2sum += s2[i];
	}
	if (s1sum == s2sum)
	{
		return (0);
	}
	else if (s1sum < s2sum)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
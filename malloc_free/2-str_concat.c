#include "main.h"

/**
 * str_concat - Exercise #2 function
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Description: Concatenates two strings
 *
 * Return: a newly allocated space in memory
 * which contains the contents of s1, followed
 * by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int pos;
	char *str = NULL;
	int length = strlen(s1) + strlen(s2);

	str = malloc(length * sizeof(char) + 1);
	if (str != NULL)
	{
		for (i = 0; i < (int) strlen(s1); i++)
		{
			str[i] = s1[i];
			pos++;
		}
		for (i = 0; i < (int) strlen(str); i++)
		{
			str[pos] = s2[i];
			pos++;
		}
		str[pos] = '\0';
	}
	return (str);
}

#include "main.h"

/**
 * _strncpy - Exercise #2 function
 *
 * @src: The source string to copy
 * @n: The number of characters from the source string to copy
 *
 * Description: Concatenates two strings
 *
 * Return: The destination string with the n characters
 * from the source string.
*/

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}

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
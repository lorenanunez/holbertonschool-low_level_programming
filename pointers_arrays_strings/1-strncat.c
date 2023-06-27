#include "main.h"

/**
 * _strncat - Exercise #1 function
 * @dest: The first string
 * @src: The string to concatenate to the first string
 * @n: The number of characters from the source string to concat
 * Description: Concatenates two strings
 *
 * Return: The concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}

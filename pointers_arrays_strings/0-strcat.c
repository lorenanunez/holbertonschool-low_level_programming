#include "main.h"

/**
 * _strcat - Exercise #0 function
 * @dest: The first string
 * @src: The string to concatenate to the first string
 * Description: Concatenates two strings
 *
 * Return: The concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int x;
	x = strlen(dest);
	for (i = 0; i <= (int) strlen(src); i++)
	{
		dest[x] = src[i];
		x++;
	}
	return (dest);
}
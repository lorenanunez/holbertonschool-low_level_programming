#include "main.h"

/**
 * _strcat - Exercise #0 function
 * @dest: The first string
 * @src: The string to concatenate to the first string
 * Description: Concatenates two strings
 *
 * Return: The concatenated string
*/

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	x = strlen(dest);
	for (i = 0; i <= (int) strlen(src); i++)
	{
		dest++;
		dest[x] = src[i];
		x++;
	}
	return (dest);
}
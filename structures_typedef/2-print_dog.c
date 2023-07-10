#include "dog.h"

/**
 * print_dog - Exercise #2 function
 *
 * @d: The dog to print the information
 *
 * Description: Prints the information of
 * the dog.
 *
 * Return: Always null
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age != NULL)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: 0.000000\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

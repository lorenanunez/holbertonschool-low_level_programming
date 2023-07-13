#include "dog.h"

/**
 * free_dog - Exercise #5 function
 *
 * @d: The dog's to set free
 *
 * Description: Sets free a dog
 *
 * Return: Always void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

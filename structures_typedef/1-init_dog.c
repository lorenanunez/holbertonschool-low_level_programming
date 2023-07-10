#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Exercise #2 function
 *
 * @d: The dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: Initializes the dog
 *
 * Return: Always null
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;	
	}
}

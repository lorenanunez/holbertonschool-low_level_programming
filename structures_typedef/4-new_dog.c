#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Exercise #4 function
 *
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner's name
 *
 * Description: Creates a brand new dog.
 *
 * Return: The created dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *theDog = malloc(sizeof(dog_t));

	theDog->name = name;
	theDog->age = age;
	theDog->owner = owner;
	return (theDog);
}

#include "dog.h"

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

	if (theDog != NULL)
	{
		theDog->name = malloc(sizeof(name));
		if (theDog->name == NULL)
		{
			free(theDog);
			return (NULL);
		}
		theDog->owner = malloc(sizeof(owner));
		if (theDog->owner == NULL)
		{
			free(theDog->name);
			free(theDog);
			return (NULL);
		}
		strcpy(theDog->name, name);
		theDog->age = age;
		strcpy(theDog->owner, owner);
	}
	return (theDog);
}

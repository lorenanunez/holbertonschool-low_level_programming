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

int main(void)
{
	char *name = "Ghost";
	char *owner = "Jon Snow";
	dog_t *my_dog;

	my_dog = new_dog(name, 4.75, owner);
	if (my_dog == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	if (my_dog->name == name || my_dog->owner == owner)
	{
		printf("Duplicated strings should be stored in the allocated structure.\n");
		return (1);
	}
	printf("My name is %s, I am %.2f, and my owner is %s\n",
		my_dog->name, my_dog->age, my_dog->owner);
	return (0);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *theDog = malloc(sizeof(dog_t));

	if (theDog != NULL)
	{
		theDog->name = malloc(sizeof(name));
		theDog->owner = malloc(sizeof(owner));
		strcpy(theDog->name, name);
		theDog->age = age;
		strcpy(theDog->owner, owner);
	}
	return (theDog);
}

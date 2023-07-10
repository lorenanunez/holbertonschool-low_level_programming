#ifndef HEADER
#define HEADER
#include <stdio.h>
/**
 * struct dog - Men best friend
 *
 * @name: The name of the doggo
 * @age: The age of the doggo
 * @owner: The name of the doggo's owner
 *
 * Description: Struct to represent a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

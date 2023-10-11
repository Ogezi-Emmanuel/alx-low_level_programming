#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: name of the dog(char *)
 * @age: age of the dog(float)
 * @owner: name of the owner of the dog(char *)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

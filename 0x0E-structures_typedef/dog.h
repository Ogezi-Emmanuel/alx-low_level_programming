#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - a structure of dog
 * @name: attribute pointer to the char name dog
 * @age: attribute float age of dog
 * @owner: attribute pointer to the char owner dog
 *
 * Description: This structure contains information about a dog, including
 * its name, age and the name of it's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

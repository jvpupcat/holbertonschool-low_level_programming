#include "dog.h"

/**
 * init_dog - function that initialize a variable type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: none
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name == NULL)
		return;
	if (owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"

/**
 * _strcpy - function that copies a string
 * @dest: pointer
 * @src: pointer
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int x;

	for (length = 0; src[length] != '\0'; length++)

		;

	for (x = 0; x <= length; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _strlen - function that calculates the length of a string
 * @s: a pointer to the string
 * Return: x upon success
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x++;
	return (x);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: dog upon success
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_length, owner_length;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_length = _strlen(name);
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	owner_length = _strlen(owner);
	dog->owner = malloc(owner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	else
	{
		_strcpy(dog->owner, owner);
	}
	dog->age = age;
	return (dog);
}

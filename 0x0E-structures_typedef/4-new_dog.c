#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age
 * @owner: owner of the dog
 *
 * Return: a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->age = age;
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}

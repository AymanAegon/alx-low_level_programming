#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  frees a dog.
 * @d: pointer to the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

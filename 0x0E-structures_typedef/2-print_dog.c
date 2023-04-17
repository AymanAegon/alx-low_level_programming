#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: pointer to the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

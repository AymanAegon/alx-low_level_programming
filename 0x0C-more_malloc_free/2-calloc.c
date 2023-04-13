#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: nmemb
 * @size: size
 *
 * Return: a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	for (i = 0; i < nmemb * size; i++)
		*(arr + i) = 0;
	return (arr);
}

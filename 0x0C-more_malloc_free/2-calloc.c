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
	int *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = (int *)malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		*(arr + size * i) = 0;
	return ((void *)arr);
}

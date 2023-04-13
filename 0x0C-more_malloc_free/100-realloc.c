#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: a pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    unsigned int i;
    void *p;
    char *a, *b;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	a = (char *)ptr;
	b = (char *)p;
	for (i = 0; i < old_size; i++)
		a[i] = b[i];
	free(ptr);
	return (p);
}

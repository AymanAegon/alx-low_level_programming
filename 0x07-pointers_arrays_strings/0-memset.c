#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the start of the memory
 * @b: the character
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}

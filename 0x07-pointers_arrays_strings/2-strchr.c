#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	long unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

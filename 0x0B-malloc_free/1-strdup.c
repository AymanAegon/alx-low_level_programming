#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: the string
 *
 * Return: duplicated string.
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (!str)
		return (NULL);
	s = (char *)malloc(sizeof(str));
	if (!s)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

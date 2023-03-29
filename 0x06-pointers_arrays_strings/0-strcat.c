#include "main.h"

/**
 * main - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}

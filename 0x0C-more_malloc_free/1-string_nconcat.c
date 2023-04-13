#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a, b;
	char *s;

	a = 0;
	b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		a++;
	for (i = 0; s2[i] != '\0'; i++)
		b++;
	if (n >= b)
		n = b;
	n += 0;
	s = (char *)malloc(sizeof(char) * (n + a + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[i + a] = s2[i];
	s[i + a] = '\0';
	return (s);
}

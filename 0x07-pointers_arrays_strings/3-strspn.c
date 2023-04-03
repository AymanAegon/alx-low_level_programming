#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the character
 *
 * Return: pointer to the first occurrence of the character c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j, k;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				k = 1;
				break;
			}
		}
		if (k == 1)
			k = 0;
		else
			break;
	}
	return (n);
}

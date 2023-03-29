#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the string
 * Return: leet
 */

char *leet(char *s)
{
	int i, j;
	char a[8] = "OL EA  T";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((s[i] == a[j] || s[i] == a[j] + 32) && s[i] != ' ')
				s[i] = j + '0';
		}
	}
	return (s);
}

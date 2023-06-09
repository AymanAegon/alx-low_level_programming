#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string
 * Return: result
 */

char *cap_string(char *s)
{
	int i, j;
	char a[13] = " \n\t,;.!?\"(){}";
	int b;

	b = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (a[j] == s[i])
				b = 1;
		}
		if (b == 1)
		{
			if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
				s[i + 1] = s[i + 1] - 32;
		}
		b = 0;
	}
	return (s);
}

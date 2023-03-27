#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, in reverse, followed by a new line.
 * @str: the string
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	
	for (i = strlen(s)-1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

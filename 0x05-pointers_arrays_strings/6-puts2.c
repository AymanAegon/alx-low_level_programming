#include "main.h"
#include <string.h>
/**
 * rev_string - prints every other character of a string
 * @s: the string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	
	for (i = 0; i < strlen(str); i++)
	{
		if ((int) str[i] % 2 == 0)
			_putchar(str[i]);
	}
}

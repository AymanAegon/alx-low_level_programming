#include <stdio.h>
/* headers goes here */
#include "_putchar.c"

/**
 * function - Print alphabets 1
 *
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#include <stdio.h>
/* more headers goes there */
#include "_putchar.c"

/**
 * main - Print alphabets 1
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

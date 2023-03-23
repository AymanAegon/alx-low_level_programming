#include <stdio.h>
#include "main.h"
/**
* print_diagonal -  draws a diagonal line in the terminal.
* @n: length of the line
* Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

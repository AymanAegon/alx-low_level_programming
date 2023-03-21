#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 *@n: the start number
 *
 * Return: Always void
 *
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		if (i >= 10)
			_putchar('0' + i / 10);
		_putchar('0' + i % 10);
		_putchar(',');
		_putchar(' ');
	}
	if (n <= 98)
		_putchar('9');
		_putchar('8');
}

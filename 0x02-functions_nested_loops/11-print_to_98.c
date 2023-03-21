#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 *@n: the start number
 *
 * Return: Always void
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
void print_to_98(int n)
{
	int i, a;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 0)
				_putchar('-');
			a = _abs(i);
			if (a >= 100)
				_putchar('0' + a / 100);
			if (a >= 10)
				_putchar('0' + (a % 100) / 10);
			_putchar('0' + a % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i >= 100)
				_putchar('0' + i / 100);
			if (i >= 10)
				_putchar('0' + (i % 100) / 10);
			_putchar('0' + i % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

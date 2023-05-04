#include <stdio.h>
#include "main.h"
/**
 * print_binary2 - prints the binary representation of a number.
 * @n: the number
 *
 * Return: void
 */
void print_binary2(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary2(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	else
		_putchar('1');
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary2(n);
}

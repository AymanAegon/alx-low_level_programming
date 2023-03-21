#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the number
 *
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int a;
	
	n = _abs(n);
	a = n % 10;
	_putchar(48 + a);
	return (a);
}

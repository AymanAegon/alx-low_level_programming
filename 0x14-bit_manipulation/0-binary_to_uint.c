#include <stdio.h>
#include "main.h"

/**
 * _pow - calculate the power
 * @x: base
 * @y: power
 *
 * Return: x^y
 */
unsigned int _pow(int x, unsigned int y)
{
	unsigned int i, s = 1;
	for (i = 0; i < y; i++)
		s *= x;
	return (s);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: a binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0, s = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		n++;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		n--;
		if (b[i] == '1')
			s += _pow(2, n);
	}
	return (s);
}

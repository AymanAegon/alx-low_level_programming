#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int s = 0;
	unsigned long int a;

	a = n ^ m;
	while (a != 0)
	{
		if ((a & 1) == 1)
			s++;
		a = a >> 1;
	}
	return (s);
}

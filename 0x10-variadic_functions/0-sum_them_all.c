#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum, i;

	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

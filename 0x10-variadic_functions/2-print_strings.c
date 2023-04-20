#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		if (!separator || i == 0)
			printf("%s", va_arg(ptr, char *));
		else
			printf("%s%s", separator, va_arg(ptr, char *));
	}
	va_end(ptr);
	printf("\n");
}

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
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%s", va_arg(ptr, char *));
		printf("%s\n", va_arg(ptr, char *));
		return;
	}

	for (i = 0; i < n - 1; i++)
		printf("%s%s", va_arg(ptr, char *), separator);
	printf("%s\n", va_arg(ptr, char *));
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d", va_arg(ptr, int));
		printf("%d\n", va_arg(ptr, int));
		va_end(ptr);
		return;
	}

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ptr, int), separator);
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}

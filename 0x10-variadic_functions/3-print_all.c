#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything.
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i;
	char c, *step, *str;

	i = 0;
	step = "";
	va_start(ptr, format);
	if (!format)
	{
		printf("\n");
		va_end(ptr);
		return;
	}
	while (format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%s%c", step, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", step, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", step, va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", step, str);
				break;
			default:
				i++;
				continue;
		}
		i++;
		step = ", ";
	}
	printf("\n");
	va_end(ptr);
}

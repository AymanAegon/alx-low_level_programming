#include "main.h"
/* more headers goes there */

/**
 * _islower - is a character lowercase
 *
 *
 * Return: 1 if lowercase
 *
 */
int _islower(char c)
{
	if (islower(c) == 2)
		return (1);
	else
		return (0);
}

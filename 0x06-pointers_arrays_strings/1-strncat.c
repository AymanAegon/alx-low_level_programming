#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number if bytes
 * Return: concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

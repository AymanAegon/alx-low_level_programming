#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * This program will assign a random number to
 * the variable n each time it is executed.
 * Complete the source code in order to print whether
 * the number stored in the variable n is positive or negative.
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n == 0)
		printf(" is zero\n");
	if (n < 0)
		printf(" is negative\n");
	if (n > 0)
		printf(" is positive\n");

	return (0);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * This program will assign a random number to
 * the variable n each time it is executed.
 * Complete the source code in order
 * to print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of %d is %d and is", n, last);
	if (last > 5)
		printf(" greater than 5\n");
	else if (last == 0)
		printf(" 0\n");
	else if (last < 6)
		printf(" less than 6 and not 0\n");
	return (0);
}

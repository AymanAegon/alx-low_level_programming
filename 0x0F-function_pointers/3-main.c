#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b, x;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	x = func(a, b);
	printf("%d\n", x);
	return (0);
}

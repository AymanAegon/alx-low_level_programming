#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of argument
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

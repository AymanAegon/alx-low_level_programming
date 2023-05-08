#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int f_to, f_from, n;
    char *buf;

    if (ac != 3)
    {
    	dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
    f_from = open(av[1], O_RDONLY);
    if (f_from == -1)
    {
    	dprintf(2, "Error: Can't read from file %s\n", av[1]);
    	exit(98);
	}
    f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (f_to == -1)
    {
    	dprintf(2, "Error: Can't write to %s\n", av[2]);
    	exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	n = read(f_from, buf, 1024);
	if (n == -1)
	{
    	dprintf(2, "Error: Can't read from file %s\n", av[1]);
    	free(buf);
		exit(98);
	}
	n = write(f_to, buf, n);
    if (n == -1)
    {
    	dprintf(2, "Error: Can't write to %s\n", av[2]);
    	free(buf);
    	exit(99);
	}
	n = close(f_from);
	if (n == -1)
	{
    	dprintf(2, "Error: Can't close fd %d\n", f_from);
    	exit(100);
	}
	n = close(f_to);
	if (n == -1)
	{
    	dprintf(2, "Error: Can't close fd %d\n", f_to);
    	exit(100);
	}
    return (0);
}

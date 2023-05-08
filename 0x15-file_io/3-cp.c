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
    int f_to, f_from, r, w, n;
    char *buf;

    if (ac != 3)
    {
    	dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
    f_from = open(av[1], O_RDONLY);
	r = read(f_from, buf, 1024);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		if (f_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, 1024);
		f_to = open(av[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buf);
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

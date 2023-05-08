#include "main.h"
#include <stdlib>h>
/**
 * read_textfile - reads a txt file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, n;
	char *s;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	n = read(f, s, letters);
	printf("%s", s);
	free(s);
	close(f);
	return (n);
}

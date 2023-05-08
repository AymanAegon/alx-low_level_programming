#include "main.h"
/**
 * read_textfile - reads a txt file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	ssize_t n = 0;
	size_t i = 0;
	char c;

	if (filename == NULL)
			return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	c = fgetc(f);
	while (c != EOF && i < letters)
	{
		putchar(c);
		c = fgetc(f);
		i++;
		n++;
	}
	fclose(f);
	return (n);
}

#include "main.h"
#include <string.h>
/**
 * read_textfile - creates a file.
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t f, n, i;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		n = write(f, text_content, i);
		if (n == -1)
			return (-1);
	}
	return (1);
}

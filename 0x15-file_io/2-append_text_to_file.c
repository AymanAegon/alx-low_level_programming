#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t f, n, i;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	i = strlen(text_content);
	n = write(f, text_content, i);
	if (n == -1)
		return (-1);
	close(f);
	return (1);
}

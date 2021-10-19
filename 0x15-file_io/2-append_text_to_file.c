#include "main.h"

/**
 * append_text_to_file - Function to append text at the end of a file.
 * @filename: pointer to filename.
 * @text_content: string to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	register int fd, x, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		x = write(fd, text_content, len);
		if (x == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

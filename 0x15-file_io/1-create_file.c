#include "main.h"

/**
 * create_file - Function to create a file.
 * @filename: pointer to a filename.
 * @text_content: string that is appended to a file.
 *
 * Return: 1 on success, -1 upon failure.
 */
int create_file(const char *filename, char *text_content)
{
	register int fd, x, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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

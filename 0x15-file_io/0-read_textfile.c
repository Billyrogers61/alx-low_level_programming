#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the
 *                 POSIX standard output.
 * @filename: pointer to filename.
 * @letters: bytes to print.
 * Return: actual bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	register int fd, r, x;
	char *buff = NULL;

	if (!filename)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[letters] = '\0';
	x = write(STDOUT_FILENO, buff, r);
	if (x == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (x);
}

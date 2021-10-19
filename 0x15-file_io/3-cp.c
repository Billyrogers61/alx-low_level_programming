#include "main.h"

/**
 * main - Function that copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int r, a1, a2;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(fd1, buff, 1024)) > 0)
	{
		if (fd2 < 0 || (write(fd2, buff, r) != r))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a1 = close(fd1);
	if (a1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	a2 = close(fd2);
	if (a2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
	return (0);
}

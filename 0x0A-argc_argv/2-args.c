#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: String arguments.
 *
 * Return: Always 0 success.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

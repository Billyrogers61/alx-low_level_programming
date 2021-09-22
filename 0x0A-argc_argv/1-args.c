#include <stdio.h>

/**
 * main - Enry point.
 * @argc: Number of arguments.
 * @argv: string arguments.
 *
 * Return: Always 0 success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count, sum;

	sum = 0;
	for (count = 1; count < argc; count++)
	{
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}

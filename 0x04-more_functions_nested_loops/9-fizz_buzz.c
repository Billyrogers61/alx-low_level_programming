#include <stdio.h>

/**
 * main - function to print numbers from 1 to 100 but with conditions.
 * Return: Always 0.
 */
int main(void)
{
	int num;

	num = 1;
	while (num > 0 && num <= 99)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", num);
		}
		num++;
	}
	print("Buzz\n");
	return (0);
}

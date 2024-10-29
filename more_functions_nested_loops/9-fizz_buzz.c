#include <stdio.h>

/**
 * main - print fizz buzz for multiple of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 15 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 15 != 0)
		{
			printf("Buzz ");
		}
		else if (i % (3 * 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}

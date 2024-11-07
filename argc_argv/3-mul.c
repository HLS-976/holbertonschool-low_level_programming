#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: char
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x, y, res = 0;

		x = atoi(argv[1]);
		y = atoi(argv[2]);

		res = x * y;

		printf("%d\n", res);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc);
	}

	return (0);
}

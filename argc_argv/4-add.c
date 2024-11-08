#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds  positive numbers
 * @argc: int
 * @argv: char
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i, j, res = 0;

		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{

				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);

		}
		printf("%d\n", res);
	}

	return (0);
}

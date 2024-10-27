#include <stdio.h>

/**
 * print_to_98 - print all number from n to 98
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
	int i;


	for (i = n; i < 99; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	for (i = n; i > 98; i--)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}

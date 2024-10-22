#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lower case
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

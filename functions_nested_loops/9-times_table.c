#include <stdio.h>

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j  < 10)
			{
				printf("%d,  ", i * j);
			}
			else
			{
				printf("%d, ", i * j);
			}
		}
		printf("\n");
	}
}

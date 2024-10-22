#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print the last digit of number
 * Return: 0
 */
int main(void)
{
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last = n % 10;
	if (Last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Last);
	else if (Last < 6 && Last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
	else if (Last == 0)
		printf("Last digit of %d is %d and is 0\n", n, Last);
	return (0);
}

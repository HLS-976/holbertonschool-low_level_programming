#include "3-calc.h"
/**
 * main - prints the resultat of operation
 * @argc: int
 * @argv: char  *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*resultOperation)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' &&
argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%') ||
argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	resultOperation = get_op_func(operator);
	if (resultOperation == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", resultOperation(num1, num2));

	return (0);
}

#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: char *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	op_t *ptr_op = ops;

	while (ptr_op->op != NULL && *(ptr_op->op) != *s)
		ptr_op++;

	return (ptr_op->f);
}

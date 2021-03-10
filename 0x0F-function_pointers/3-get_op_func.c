#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 *get_op_func- choses the right operation
 *@s:the operator passed as argument to the program
 *Return: int
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}

	return (ops[i].f);
}

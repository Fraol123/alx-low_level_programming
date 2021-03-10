#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_fun- choses the right operation
 *@s:the operator passed as argument to the program
 *
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

	if (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}

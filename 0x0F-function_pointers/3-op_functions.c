#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add- adds
 *@a:checked
 *@b: checked
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub- subtracts
 *@a: checked
 *@b: checked
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul- multiplies
 *@a:checked
 *@b:checked
 *Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div- divides
 *@a: checked
 *@b: checked
 *Return: result of division
 */
int op_div(int a, int b)
{

	return (a / b);
}
/**
 *op_mod- reminder
 *@a: checked
 *@b: checked
 *Return: reminder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

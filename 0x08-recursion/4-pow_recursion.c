#include "holberton.h"
/**
 *_pow_recursion- power of int
 *@x: int to be powerd
 *@y: int to be raised
 *
 *Return: result
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{

		return (-1);
	}
	else if  (y == 0)
	{
		return (1);
	}

	result *= _pow_recursion(x, y - 1);

	return (result);


}


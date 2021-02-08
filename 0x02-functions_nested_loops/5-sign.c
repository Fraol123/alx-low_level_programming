#include "holberton.h"

/**
 *print_sign - (+ if 1), (0 if 0), (- if < 0)
 *
 * @n: int checked
 *
 *Return: return the sign
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

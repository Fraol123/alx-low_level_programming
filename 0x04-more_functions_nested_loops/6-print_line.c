#include "holberton.h"

/**
 *print_line- prints line
 *@n: checked
 * Return: nothing
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');

	}
	if (n > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

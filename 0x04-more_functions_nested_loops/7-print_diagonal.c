#include "holberton.h"

/**
 *print_diagonal- prints line
 *@n: checked
 * Return: nothing
 */
void print_diagonal(int n)
{

	int  i, j;

	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (j < i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}

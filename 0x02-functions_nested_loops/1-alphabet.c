#include "holberton.h"

/**
 * print_alphabet - order from a to z
 *
 *Return: x
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
       
}

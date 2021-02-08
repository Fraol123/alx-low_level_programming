#include "holberton.h"

/**
 * print_alphabet - order from a to z
 *
 *Retuen: lower
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}

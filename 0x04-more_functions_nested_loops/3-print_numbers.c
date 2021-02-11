#include "holberton.h"
/**
 *print_numbers- displays integer  0 -9
 *
 *Return: always 0
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}

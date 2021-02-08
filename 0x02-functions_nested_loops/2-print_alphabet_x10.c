#include "holberton.h"
#include "1-alphabet.c"

void print_alphabet_x10(void);

/**
 *print_alphabet_x10 - order from a to z ten times
 *
 *Return: 10x alphabet
 */

void print_alphabet_x10(void)
{
	int repeat;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		print_alphabet();
	}
}

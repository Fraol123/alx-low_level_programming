#include "holberton.h"
/**
 * print_most_numbers- excludin g 2 and 4
 *
 *Return: nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{

		if (num == 2 || num  == 4)
		{
			num++;
		}
		_putchar((num % 10) + '0');
		_putchar('\n');
	}
}

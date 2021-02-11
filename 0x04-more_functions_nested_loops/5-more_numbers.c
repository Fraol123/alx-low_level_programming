#include "holberton.h"
void more_numbers(void);

/**
 *more_numbers - order from 1 to 14 ten times
 *
 *Return: 10x  number list
 */

void more_numbers(void)
{

	int num, repeat;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				_putchar((num % 10) + '0');
			}
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num %  10) + '0');
			}
		}
		_putchar('\n');
	}
}


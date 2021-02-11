#include "holberton.h"
void more_numbers(void);

/**
 *more_numbers - order from 1 to 14 ten times
 *
 *Return: 10x  number list
 */

void more_numbers(void)
{

	char i, j, k;

	int l;

	for (l = 0; l <= 9; l++)
	{
		k = '9';
		for (i = '0'; i <= '1'; i++)
		{

			for (j = '0'; j <= k; j++)
			{
				if (i > '0')

					_putchar(i);
				_putchar(j);
			}
			k = '4';
		}
		_putchar('\n');
	}
}




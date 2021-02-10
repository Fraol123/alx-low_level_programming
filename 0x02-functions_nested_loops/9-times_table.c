#include "holberton.h"
/**
 *times_table - prints out the time table
 *Return: nothing
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)

	{
		for (b = 0; b < 10; b++)
		{
			int val = a * b;

			if (b == 0)

				_putchar('0');
			if (val < 10 && b != 9 && b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + val);
				_putchar(',');
			}
			else if (val >= 10 && b != 9 && b != 0)
			{
				_putchar(' ');
				_putchar('0' + (val / 10));
				_putchar('0' + (val % 10));
				_putchar(',');
			}
			else if (b == 9 && val < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + val);
			}
			else if (b == 9 && val >= 10)
			{
				_putchar(' ');
				_putchar('0' + (val / 10));
				_putchar('0' + (val % 10));
			}
		}
		

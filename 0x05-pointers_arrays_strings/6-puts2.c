#include "holberton.h"
/**
 *puts2- print even number
 *@str:checked
 *Return:nothing
 */
void puts2(char *str)
{

	if (*str)
	{
		int length = 10;

		int i = 0;



		while (i < length)
		{
			_putchar(str[i]);
			i += 2;
		}
	}
	_putchar('\n');
}

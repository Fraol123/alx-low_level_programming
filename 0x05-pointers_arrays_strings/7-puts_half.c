#include "holberton.h"
/**
 *puts_half- print half
 *@str:checked
 *Return:nothing
 */
void puts_half(char *str)
{

	if (*str)
	{
		int length = 10;
		int n;

		n = length / 2;





		while (n <= length)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

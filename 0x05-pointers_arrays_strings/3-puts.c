#include "holberton.h"
/**
 *_puts- prints out to stdout with new line
 *@str: checked
 *Return:nothing
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
	}
	_putchar('\n');
}

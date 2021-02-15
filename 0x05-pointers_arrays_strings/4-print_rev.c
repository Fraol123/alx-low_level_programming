#include "holberton.h"
/**
 *print_rev- prints in reverse
 *@s: checked
 *
 *Return: nothing
 */
void print_rev(char *s)
{

	if (s)
	{
		int length = 0;

		int i = 0;

		int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			length++;
		}

		while (i <= length)
		{

			_putchar(s[length - i - 1]);
			i++;
		}
	}
	_putchar('\n');
}

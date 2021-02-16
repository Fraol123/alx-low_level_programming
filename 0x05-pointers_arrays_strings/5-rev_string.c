#include "holberton.h"

/**
 *rev_string- prints in reverse
 *@s: checked
 *
 *Return: nothing
 */
void rev_string(char *s)
{

	if (s)
	{
		int length = 10;

		int i = 0;

		int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			length++;
		}

		while (i < 10)
		{

			_putchar(s[10 - i - 1]);
			i++;
		}
	}

		_putchar('\n');
}

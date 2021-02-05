#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x  == 'e')
		{
			x++;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}

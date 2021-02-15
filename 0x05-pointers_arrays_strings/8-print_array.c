#include "holberton.h"
#include <stdio.h>

/**
 *print_array-print arrays
 *@a: checked
 *@n: checcked
 *Return: nothing
 */
void print_array(int *a, int n)
{
	if (a)
	{

		int i = 0;

		while (i < n)
		{
			printf("%d", a[i]);
			if (i <= (n - 1))
			{
				printf(",");
				printf(" ");
			}
			i++;

		}
	}
	printf("\n");
}

#include "holberton.h"
/**
 *swap_int- interchanges a and b
 *@a:checked
 *@b: checked
 *Return:nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}


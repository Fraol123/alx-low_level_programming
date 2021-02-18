#include "holberton.h"
/**
 *reverse_array- prints in reverse
 *
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;

	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}


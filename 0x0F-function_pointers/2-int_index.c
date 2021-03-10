#include "function_pointers.h"
/**
 *int_index- function that searchs for intger
 *@array:The array to be serched
 *@size:The number of element in the array
 *@cmp:is a pointer to the function to be used to compare values
 *
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}

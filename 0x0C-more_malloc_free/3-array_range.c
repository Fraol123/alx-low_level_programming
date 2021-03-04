#include "holberton.h"
#include <stdlib.h>

/**
 *array_range- cretes array of integer
 *@max: last value of the array
 *@min: first value of the array
 *Return: NULL if min > max and if array equall to NULL
 *        otherwise an array
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < max ; i++)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = min++;
		}
	}
	return (array);
}

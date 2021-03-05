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

	if (min > max)
		return (NULL);
	size = max - min;

	array = malloc(sizeof(int) * (size + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = i + min;
	array[size] = max;
	return (array);
}

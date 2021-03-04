#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc- function allocates memory for an array of nmemb
 *@nmemb: array
 *@size: size of the array
 *Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	char *newa;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);
	newa =  array;

	for (i = 0; i < (size * nmemb); i++)
		newa[i] = '\0';
	return (array);
}

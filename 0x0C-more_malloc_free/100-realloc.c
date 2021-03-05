#include "holberton.h"
#include  <stdlib.h>
/**
 *_realloc-void function
 *@ptr: a pointer to the memory previously allocate
 *@old_size:old size
 *@new_size:checked
 *
 *Return:m
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;

	unsigned int i;

	if (new_size == 0 && ptr != NULL)
		free(ptr);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{

		m  = malloc(new_size);

		if (m == NULL)
			return (NULL);

		else
			return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)m + i) = *((char *)ptr + i);

		free(ptr);
	}

	return (m);
}


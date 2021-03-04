#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked- assigns memory using malloc
 *@b: the number of byte to be assignd to
 *Return: new pointer on success
 */

void *malloc_checked(unsigned int b)
{
	void *newpointer = malloc(b);

	if (newpointer == NULL)
	{
		exit(98);
	}
	return (newpointer);
}

#include "holberton.h"
/**
 *set_bit-function that sets the value of a bit to 1
 *@n: A ptr to a bit
 *@index: the index to set the value
 *Return: if an error occure -1 otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

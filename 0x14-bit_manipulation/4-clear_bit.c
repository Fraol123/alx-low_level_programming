#include "holberton.h"
/**
 *clear_bit- sets the value of a bit to 0 at a given index.
 *@n: A ptr to a bit
 *@index: the index to set the value
 *Return: if an error occure -1 otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);/*~ reverses each bit in a value*/

	return (1);
}

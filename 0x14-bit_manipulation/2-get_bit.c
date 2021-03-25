#include "holberton.h"
/**
 *get_bit-function that returns the value of a bit at a given index
 *@n:number
 *@index: the number of times to be shifted
 *Return: nth bit - bitstatus
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bitstatus = (n >> index) & 1;/*nth bit of n right shift n, index times*/

	return (bitstatus);
}

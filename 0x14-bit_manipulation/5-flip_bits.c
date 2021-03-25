#include "holberton.h"
/**
 *flip_bits-counts how many bits need to be flipped in n to be m
 *@n: the original number
 *@m: the number n would flip into
 *Return: the number of bits that would need to be flipped for n to became m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	count = 0;
	result = n ^ m;
	while (result != 0)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}

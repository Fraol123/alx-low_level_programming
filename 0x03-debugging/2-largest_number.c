#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number correctly 
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b < c)
	{
		largest = a;
	}
	if (b < a && a > c)
	{
		largest = a;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

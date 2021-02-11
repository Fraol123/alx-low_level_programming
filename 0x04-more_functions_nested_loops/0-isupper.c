#include "holberton.h"

/**
 *_isupper - check if int c is upper
 *
 * @c: int checked
 * Return: 1 if upper,0 if  loweer
 */

int  _isupper(int c)
{
	if (c  >= 65  &&  c  <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

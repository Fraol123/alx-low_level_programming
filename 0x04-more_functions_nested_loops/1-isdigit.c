#include "holberton.h"
/**
 *_isdigit - check if int c is digit
 *
 * @c: int checked
 * Return: 1 if digit,0 if  other
 */

int _isdigit(int c)
{
	if (c  >= 48  &&  c  <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

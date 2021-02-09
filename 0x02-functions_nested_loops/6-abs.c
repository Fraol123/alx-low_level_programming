#include "holberton.h"

/**
 * _abs - return absolute value
 *
 * @y: int checked
 *
 *Return: absolute Value
 *
 */

int _abs(int y)
{
	if (y < 0)
	{
		return (0 - y);
	}
	else
	{
		return (y);
	}
}

#include "holberton.h"

/**
 * _isalpha - check if c is a letter, lowercase or uppercase
 *
 * @c : int checked
 *
 *Return: 1 if letter is letter, uppercase or lower, 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

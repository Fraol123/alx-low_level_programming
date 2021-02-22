#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring.
 *@s: the string to be searched.
 *@accept: the prefix to be measured.
 *
 *Return: The number of bytes in s which
 *        consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int ln;

	while (*s)
	{
		for (ln = 0; accept[ln]; ln++)
		{
			if (*s == accept[ln])
			{
				bytes++;
				break;
			}
			else if (accept[ln + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

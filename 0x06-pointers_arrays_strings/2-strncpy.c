#include "holberton.h"
/**
 *_strncpy- copies the string pointed to by src,
 *@dest:checked
 *@src: checked
 *@n:checked
 *Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}


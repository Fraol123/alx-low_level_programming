#include "holberton.h"
/**
 *_strcpy- copies string
 *@dest:checked
 *@src: checked
 *Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

#include "holberton.h"
/**
 *_strcat- append string
 *@dest: checked
 *@src: checked
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;

	n = 5;

	while (src[i])
	{
		dest[i + n] = src[i];
		i++;
	}
	return (dest);
}

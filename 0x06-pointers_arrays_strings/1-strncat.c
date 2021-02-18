#include "holberton.h"
/**
 *_strncat- append string
 *@dest: checked
 *@src: checked
 *@n: checked
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	n = 5;

	while (src[i])
	{
		dest[i + n] = src[i];
		i++;
	}
	return (dest);
}

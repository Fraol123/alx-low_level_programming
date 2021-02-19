#include "holberton.h"
/**
 *_strcat- append string
 *@dest: checked
 *@src: checked
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;

	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

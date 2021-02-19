#include "holberton.h"
/**
 *_strcmp- copies the string pointed to by src,
 *
 *@s1: checked
 *@s2:checked
 *Return: int
 */


int _strcmp(char *s1, char  *s2)
{
	int i, output;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}

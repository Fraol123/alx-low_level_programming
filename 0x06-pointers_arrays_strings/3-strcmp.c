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
	int i = 0;

	for (i = 0; (*(s1 + i) && *(s2 + i)); i++)
	{
		if ((*(s1 + i) == *(s2 + i)))
		{
			i++;
			break;
		}
	}

	return (*(s1 + i) - *(s2 + i));
}

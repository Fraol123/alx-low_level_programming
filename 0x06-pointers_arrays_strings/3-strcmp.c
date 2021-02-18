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
	int i, j;

	for (i = 0; s1[i]; ++i)
	{
		for (j = 0; s2[j]; ++j)
		{
			if (s1 - s2 == 0)
			{
				s1[i] = s2[j];
			}
			if (s1 - s2 > 0)
			{
				s1[i] > s2[j];
			}

			else

			{
				s1 - s2 < 0;
			}
		}
	}
	return (0);
}

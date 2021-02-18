#include "holberton.h"

/**
 *rot13- rotate  letters 13 wise
 *@s: checked
 *Return: s
 */
char *rot13(char *s)
{

	int i, j;

	char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[j] == *(s + i))
			{
				*(s + i) = dest[j];
break;
			}
		}
	}
	return (s);
}

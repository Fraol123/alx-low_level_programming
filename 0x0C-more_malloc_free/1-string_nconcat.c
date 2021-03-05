#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat-concatinates two strings
 *@s1: holberton
 *@s2: school
 *@n:checked
 *Return: concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *varcon;

	unsigned int i, j, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	if (j > n)
		j = n;

	varcon = malloc(sizeof(char) * (i + j + 1));

	if (varcon == NULL)
		return (NULL);

	for (len = 0; len < i; len++)
	{
		varcon[len] = s1[len];
	}

	for (len = 0; len < j; len++)
	{
		varcon[len + i] = s2[len];
	}

	varcon[i + j] = '\0';

	return (varcon);
}

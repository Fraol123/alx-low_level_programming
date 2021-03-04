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

	int i,  conc_i = 0, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)

		len++;

	varcon  = malloc(sizeof(char) * (len + 1));

	if (varcon  == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		varcon[conc_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		varcon[conc_i++] = s2[i];

	varcon[len] = '\0';

	return (varcon);
}

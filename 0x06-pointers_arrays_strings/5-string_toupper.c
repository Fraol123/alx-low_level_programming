#include "holberton.h"

/**
 *string_toupper- converts small letters to cap
 *@s: checked
 *Return: s
 */
char *string_toupper(char *s)
{
	int c = 0;


	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 65 && s[c] <= 90)
		{
			s[c] = s[c] + 32;
		}
		if (s[c] >= 97 && s[c] <= 122)
		{
			s[c] = s[c] - 32;
		}
	}
	return (s);
}

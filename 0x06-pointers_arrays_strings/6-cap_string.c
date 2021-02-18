#include "holberton.h"

/**
 *cap_string- converts small letters to cap
 *@s: checked
 *Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i - 1] == ' ')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i];
			}
		}
	}
	return (s);
}

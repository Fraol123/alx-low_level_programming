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
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
			}
		}
		else if (s[i] >= 'a' && s[i] <= 'z') 
		{
			s[i] = s[i] - 32;
		}
			
			
			  
			
		
	}
	return (s);
}

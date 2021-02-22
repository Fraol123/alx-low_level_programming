#include "holberton.h"
/**
 *_strchr-locates charachter in a string
 *@s: the string to be serched
 *@c: the charachter to be located
 *Return: if c is found - a pointer to its first occurance
 *                      - if c is not found NULL
 */
char *_strchr(char *s, char c)
{
	int ln = 0;

	while  (s[ln] >= '\0')
	{
		ln++;

		if (s[ln] == c)

			return (s + ln);
	}
	return ('\0');
}

#include "holberton.h"
/**
 *_strstr - finds substring
*@haystack: the string to be serched.
*@needle: the substring to be found
 *
*Return: if the subscript is found - a  pointer to the begining
 *                                      of the located substring
 *              if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int ln;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ln = 0;

		if (haystack[ln] == needle[ln])
		{
			do {
				if (needle[ln + 1] == '\0')
					return (haystack);
				ln++;
			} while (haystack[ln] == needle[ln]);
		}
		haystack++;
	}
	return ('\0');
}

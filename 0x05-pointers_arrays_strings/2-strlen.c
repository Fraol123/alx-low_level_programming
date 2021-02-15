#include "holberton.h"
/**
 *_strlen- counts string exccept \0
 *@s: checked
 *Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		;
	}
	return (i);

}



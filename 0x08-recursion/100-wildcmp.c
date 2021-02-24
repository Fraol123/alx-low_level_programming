#include "holberton.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *fix_match(char *str, char *pfix);
int wildcmp(char *s1, char *s2);

/**
 *strlen_no_wilds - Returns the length of a string,
 *                   ignoring wildcard characters.
 *@str: The string to be measured.
 *
 *Return: The length.
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 *iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 *@wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 *fix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 *@str: The string to be matched.
 *@fix: The postfix.
 *
 *Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         if not - a pointer to the first unmatched character in postfix.
 */
char *fix_match(char *str, char *pfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int pfix_len = strlen_no_wilds(pfix) - 1;

	if (*pfix == '*')
		iterate_wild(&pfix);

	if (*(str + str_len - pfix_len) == *pfix && *pfix != '\0')
	{
		pfix++;
		return (fix_match(str, pfix));
	}

	return (pfix);
}

/**
 *wildcmp - Compares two strings, considering wildcard characters.
 *@s1: The first string to be compared.
 *@s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         if not - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = fix_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}

#include "holberton.h"

/**
 *_memset- assign memory location to n byte
 *@s: A pointer to the memory area to be filled.
 *@b: The character to fill the memory area with.
 *@n: The number of bytes to be filled.
 *Return: memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ln;

	char *memory = s, value = b;

	for (ln = 0; ln < n; ln++)
		memory[ln] = value;

	return (memory);
}

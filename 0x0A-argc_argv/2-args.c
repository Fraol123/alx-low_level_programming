#include <stdio.h>

/**
 *main- prints all argument it gets
 *@argc: the number of argument given to the program
 *@argv:an array of pointers to the argument
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
		printf("%s\n", argv[f]);

	return (0);
}

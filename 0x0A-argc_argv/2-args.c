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
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

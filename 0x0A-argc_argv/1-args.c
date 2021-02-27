#include <stdio.h>

/**
 *main- prints the number of argument passed to it
 *@argc: the number of argument given to the program
 *@argv:an array of pointers to the argument
 *
 *Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

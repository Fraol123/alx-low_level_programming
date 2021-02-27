#include <stdio.h>
/**
 *main-prints the program name with a new line
 *@argc:The number of arguments supplied to the program
 *@argv:an array of pointers to the argument
 *
 *Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

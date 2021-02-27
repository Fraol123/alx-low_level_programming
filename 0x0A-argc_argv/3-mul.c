#include <stdio.h>
#include <stdlib.h>
/**
 *main- prints the multiplication of two numbers
 *@argc: the number of argument given to the program
 *@argv: An array of pointers to the argument
 *
 *Return:if the program recives 2 argument their product if not 1
 */

int main(int argc, char  *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}

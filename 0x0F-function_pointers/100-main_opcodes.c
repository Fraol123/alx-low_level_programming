#include <stdio.h>
#include <stdlib.h>
/**
 *main- prints the opcodes of itself
 *@argc: argument count
 *@argv: argument
 *Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int byte, i, opcode;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)address;

		printf(".02%x\n", opcode);

		if (i == byte - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}

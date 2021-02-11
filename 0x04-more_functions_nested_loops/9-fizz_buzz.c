#include <stdio.h>
/**
 * main- prints fizz Buzz for multiple of  3,5
 *
 *Return:0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)

			printf("FizzBuzz\t");
		else if ((i % 3) == 0)

			printf("Fizz\t");
		else if ((i % 5) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);

	}
	printf("\n");

	return (0);
}

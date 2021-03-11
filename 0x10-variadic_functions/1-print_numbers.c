#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers- print number
 *@separator: string b/n numbers
 *@n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		printf("%d\n",  va_arg(ap, int));

		if (separator != NULL)
			printf("%s\n", separator);
	}

	printf("\n");
		       va_end(ap);

}
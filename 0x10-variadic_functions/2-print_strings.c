#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings- print number
 *@separator: string b/n strings
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	char *str;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
		{

			printf("%s", separator);
		}

	}
	va_end(ap);
	printf("\n");

}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_char- prints char
 *@ap:argument to the function
 */
void print_char(va_list ap)
{
	char l;

	l = va_arg(ap, int);

	printf("%c", l);
}

/**
 *print_float- prints float
 *@ap: arg to the function
 */
void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, int)
;
	printf("%f", f);
}
/**
 *print_int- prints integer
 *@ap: argument to the function
 */
void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);

	printf("%d", num);
}
/**
 *print_string- prints string
 *@ap: argument to the function
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	printf("%s", str);
}
/**
 *print_all-prints all type
 *@format: is a list of types of arguments
 *              passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list aps;

	int i, j;

	char *separator = "";

	printer_f func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(aps, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (func[j].symbol != NULL)
		{
			if (*(func[j].symbol) == format[i])
			{
				printf("%s", separator);
				func[j].func(aps);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(aps);
	printf("\n");
}

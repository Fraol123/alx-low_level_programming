#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 *struct printer- prints struct
 *@symbol: symbols for functions
 *@func: pointer function
 */
typedef struct printer

{
	char *symbol;
	void (*func)(va_list);

} printer_f;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

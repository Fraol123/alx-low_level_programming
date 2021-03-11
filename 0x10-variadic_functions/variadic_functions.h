#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 *struct printer- definig a printer
 *@variable: a variable reprsenting a data type
 *@print: a function ptr to func that prints
 *        data crosponding to @variable
 */

typedef struct printer
{
	char *variable;
	void (*print)(va_list arg);
} printer_f;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

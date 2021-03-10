#include "function_pointers.h"

/**
 *print_name- prints name
 *@name: the name to be printed
 *@f: a pointer to a function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
		f(name);
}

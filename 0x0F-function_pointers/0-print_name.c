#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name:  string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

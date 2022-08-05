#include "variadic_functions.h"
/**
 * print_numbers-function that prints numbers
 * @n: is the number of integers passed
 *
 * Print a new line at the e
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i <= (n - 1); i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, unsigned int));
		else
			printf("%s%d", separator, va_arg(ap, unsigned int ));
	}
	printf('\n');

	va_end(ap);
}

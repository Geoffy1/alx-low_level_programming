#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of args
 * @n: number of arguments
 *
 * Return: the  sum
 */
int sum_them_all(const unsigned int n, ...)
{


	va_list ap;
	int sum = 0;
	unsigned int i;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

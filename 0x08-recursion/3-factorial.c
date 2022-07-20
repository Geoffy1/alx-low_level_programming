#include "main.h"

/**
 * factorial - factorial of number
 * @n: integer parameter
 * Factorial of 0 is 1
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}

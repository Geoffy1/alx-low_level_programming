#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first in
 * @b: second int
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

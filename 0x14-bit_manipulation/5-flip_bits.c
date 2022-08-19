#include "main.h"

/**
 * flip_bits - counts bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, sum = 0;
	unsigned long int existing;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		existing = exclusive >> i;
		if (existing & 1)
			sum++;
	}

	return (sum);
}

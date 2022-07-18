#include "main.h"

/**
 * print_diagsums - Print the sum of the 2 diagonals
 * of a  *square matrix of ints
 * @a: 2d array of type int
 * @size: size of square array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizesquare;

	i = 0;
	sum = 0;
	sizesquare = size * size;
	while (i < sizesquare)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizesquare)
	{
		if (i % (size - 1) == 0 && i != (sizesquare - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}

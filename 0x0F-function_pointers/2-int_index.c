#include "function_pointers.h"

/**
 * int_index - searches for  integer
 * @array: array being searched
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element  which
 * the cmp func does not return 0
 * or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	}

	return (-1);
}

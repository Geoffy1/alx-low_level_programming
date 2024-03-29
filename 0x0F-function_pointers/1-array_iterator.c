#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action || !size)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

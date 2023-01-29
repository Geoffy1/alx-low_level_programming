#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - helper to advanced_binary
 * for a value in an integer array
 * @array: pointer to first element
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: index containing value, or -1 if value not found or
 * array is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a val
 * returns first appearance
 * @array: pointer to first element
 * @size: number of el
 * @value: value to search
 *
 * Return: first index containing value, or -1 if value not found or
 * array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}

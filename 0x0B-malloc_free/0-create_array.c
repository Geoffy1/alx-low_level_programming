#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);

	m = (char *) malloc(sizeof(char) * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(m + i) = c;
		
	}

	*(m + i) = '\0';

	return (m);
}

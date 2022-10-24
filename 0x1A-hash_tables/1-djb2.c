#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm.
 * @str: The string.
 *
 * Return: The calc hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int num_ber;

	hash = 5381;
	while ((num_ber = *str++))
		hash = ((hash << 5) + hash) + num_ber; /* hash * 33 + num_ber */

	return (hash);
}

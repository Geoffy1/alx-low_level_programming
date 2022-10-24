#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key.
 * @ht: A pointer.
 * @key: The key to get the value.
 * Return: If the key cannot be matched - NULL.
 * Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int pos_ition;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_pos_ition((const unsigned char *)key, ht->size);
	if (pos_ition >= ht->size)
		return (NULL);

	node = ht->array[pos_ition];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}

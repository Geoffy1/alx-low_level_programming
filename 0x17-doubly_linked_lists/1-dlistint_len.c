#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 * @h: pointer to the list
 *
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

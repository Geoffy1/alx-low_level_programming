#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}

#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of listint_t list
 * @head: pointer to head node
 * @index: index to find list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *original;
	unsigned int count;

	original = head;
	count = 0;
	while (count < index)
	{
	if (original)
	original = original->next;
	else
	return (NULL);
	count++;
	}

	if (original)
	return (original);
	else
	return (NULL);
}

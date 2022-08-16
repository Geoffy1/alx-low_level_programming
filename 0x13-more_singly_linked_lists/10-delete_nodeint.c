#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *original;
	listint_t *hold;
	unsigned int i;

	i = 0;
	original = *head;
	if (*head == NULL)
	return (-1);

	while (i < index)
	{
	i++;
	hold = original;
	if (original->next)
	original = original->next;
	else
	return (-1);
	}

	if (index == 0)
	*head = original->next;
	else if (original->next)
	hold->next = original->next;
	else
	hold->next = NULL;

	free(original);
	return (1);
}

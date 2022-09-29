#include "lists.h"

/**
 * delete_dnodeint_at_index - deltes a node
 * at a given idx
 * @head: double pointer
 * @index: idx to delete
 *
 * Return: 1 on success, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL || !head)
		return (-1);

	if (index == 0)
	{
		(*head)->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	current->next->prev = temp;
	free(current);

	return (1);
}

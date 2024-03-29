#include "lists.h"

/**
 * free_dlistint - frees a doubly list
 * @head: pointer to the free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

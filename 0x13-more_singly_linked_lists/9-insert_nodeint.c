#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * @head: double pointer to head
 * @index: insert node at this index,
 * starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new;
	listint_t *original;
	unsigned int count;

	if (head == NULL)
	return (NULL);

	original = *head;
	for (count = 1; original && count < index; count++)
	{
	original = original->next;
	if (original == NULL)
	return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	free(new);
	return (NULL);
	}
	new->n = n;

	if (index == 0)
	{
	*head = new;
	new->next = original;
	}
	else if (original->next)
	{
	new->next = original->next;
	original->next = new;
	}
	else
	{
	new->next = NULL;
	original->next = new;
	}

	return (new);
}

#include "lists.h"

/**
 * add_nodeint - add a new node at beginning of listint_t
 * @head: double pointer to the head node
 * @n: int value to be in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *original;
	listint_t *new;

	original = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (original == NULL)
		new->next = NULL;
	else
		new->next = original;

	return (new);
}

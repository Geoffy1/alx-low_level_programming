#include "lists.h"

/**
 * free_listint_safe - free and set the head to null
 * @h: double pointer to head
 * Description: is for circular lists
 * Only loop once
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *original;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		original = current;
		current = current->next;
		free(original);

		if (original < current)
			break;
	}
	*h = NULL;

	return (count);
}

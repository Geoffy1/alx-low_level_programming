#include "lists.h"

/**
 * print_listint_safe - Print a `listint_t` linked list adresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: numbers nodes If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	const listint_t *original;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		original = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)original, original->n);

		if (original < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}

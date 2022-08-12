#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	list_t *element;

	while (head)
	{
		element = head->next;
		free(head->str);
		free(head);
		head = element;
	}
}

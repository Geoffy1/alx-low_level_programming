#include "lists.h"

/**
 * sum_listint - get the sum of all `n` of `listint_t` list
 * @head: pointer to head
 * Return: sum of all int `n`
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *original;

	for (sum = 0, original = head; original != NULL; original = original->next)
	sum += original->n;

	return (sum);
}

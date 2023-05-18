#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list
 *
 * @hl: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *hl)
{
	int count;

	count = 0;

	if (hl == NULL)
		return (count);

	while (hl->prev != NULL)
		hl = hl->prev;

	while (hl != NULL)
	{
		printf("%d\n", hl->n);
		count++;
		hl = hl->next;
	}

	return (count);
}

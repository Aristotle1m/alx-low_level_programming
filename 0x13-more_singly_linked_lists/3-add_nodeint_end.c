#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end
 * @x: pointer to the start of the linked list
 * @n: value to add to node
 * Return: the address of the new element
 */


listint_t *add_nodeint_end(listint_t **x, const int n)
{
	listint_t *new;
	listint_t *last;

	if (!x)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;

	if (x && !*x)
	{
		*x = new;
		return (new);
	}

	for (last = *head; (*last).next; last = (*last).next)
		;

	(*last).next = new;

	return (new);
}
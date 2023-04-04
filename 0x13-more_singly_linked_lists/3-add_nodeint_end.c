#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the start of the linked list
 * @n: value to add to node
 * @x: new
 * @y: last
 * Return: the address of the new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y;

	if (!head)
		return (NULL);

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	(*x).n = n;
	(*x).next = NULL;

	if (head && !*head)
	{
		*head = x;
		return (x);
	}

	for (y = *head; (*y).next; y = (*y).next)
		;

	(*y).next = x;

	return (x);
}

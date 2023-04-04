#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * Returns: The address of the node where the loop starts
 * or NULL if there is no loop
 * @head: beggining of linked list
 * Return: beggining of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *xx;

	while (head && (*head).next)
	{
		x = head;
		xx = (*head).next;
		while (x != xx)
		{
			if (x)
				x = (*x).next;
			if (xx == head)
				return (head);
			if (xx)
				xx = (*xx).next;
			if (xx == head)
				return (head);
			if (xx)
				xx = (*xx).next;
			if (xx == head)
				return (head);
		}
		head = (*head).next;
	}
	return (NULL);
}

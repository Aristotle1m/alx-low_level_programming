#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @p: linked list of type listint_t to print.
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *p)
{
	int i;

	for (i = 0; p; p = (*p).next, i++)
		printf("%d\n", (*p).n);

	return (i);
}

#include "lists.h"

/**
 * listint_len - return # of elements
 * @p: pointer to the first element.
 * Return: number of elements
 */

size_t listint_len(const listint_t *p)
{
	int i;

	for (i = 0; p; p = (*p).next, i++)
		;

	return (i);
}

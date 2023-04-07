#include "main.h"

/**
 * clear_bit -function that sets the value of a bit to 0.
 * at some given index.
 * @n: pointer of an unsigned long integer
 * @index: index of the bits
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	if (index > 63)
		return (-1);

	max = 1 << index;

	if (*n & max)
		*n ^= max;

	return (1);
}

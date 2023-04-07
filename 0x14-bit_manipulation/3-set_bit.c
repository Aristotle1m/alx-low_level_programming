#include "main.h"

/**
 * set_bit -function that  sets the value of a bit to 1 at a given index
 * @x: pointer of an unsigned long integer
 * @y: index of the bit
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *x, unsigned int y)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << y;
	*x = (*x | z);

	return (1);
}

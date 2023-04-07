#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int input.
 * @x: index of the bit.
 * Return:always (0) value of the bit.
 */
int get_bit(unsigned long int n, unsigned int x)
{
	unsigned int main;

	if (n == 0 && x < 64)
		return (0);

	for (main = 0; main <= 63; n >>= 1, main++)
	{
		if (x == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}

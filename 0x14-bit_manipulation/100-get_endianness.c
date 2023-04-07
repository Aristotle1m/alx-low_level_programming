#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return:always 0 if max endian and 1 for min endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;

	return ((int)*y);
}

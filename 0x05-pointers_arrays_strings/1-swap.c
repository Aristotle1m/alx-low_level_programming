#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * @x: 1st integer
 * @y: 2nd integer
 * Return: void
 */

void swap_int(int *x, int *y)
{
	int z = *x;

	*x = *y;
	*y = z;
}

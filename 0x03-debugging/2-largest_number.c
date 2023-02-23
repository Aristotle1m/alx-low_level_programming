#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: first number
 * @y: second number
 * @z: third number
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if (x >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}

	return (largest);
}

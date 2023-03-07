#include "main.h"

/**
 * _pow_recursion - returns the value of b raised to the power of y
 * @b: the base
 * @y: the exponent
 * Return: the power
 */

int _pow_recursion(int b, int y)
{
		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (_pow_recursion(b, y - 1) * b);
}

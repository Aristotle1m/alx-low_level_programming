#include "main.h"

/**
 * binary_to_unit - to convert binary nos to an unasigned integer
 * @b: binary nos
 * Return: Always (0) for unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int base_two;

	if (!b)
		return (0);

	for (base_two = 0; b[base_two]; base_two++)
		;
	base_two--;
	for (y = 1, x = 0; base_two >= 0; base_two--)
	{
		if (b[base_two] == '0')
		{
			y *= 2;
			continue;
		}
		else if (b[base_two] == '1')
		{
			x += y;
			y *= 2;
			continue;
		}
		return (0);
	}
	return (x);
}

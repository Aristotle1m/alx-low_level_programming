#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			y = 0;

			while (y < (size - x))
			{
				_putchar(' ');
				y++;
			}
			z = 0;

			while (z < x)
			{
				_putchar('#');
				z++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

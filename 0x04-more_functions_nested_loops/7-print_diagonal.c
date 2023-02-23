#include "main.h"

/**
 * print_diagonal - Draws diagonal on the terminal
 * @n: number of diagonals
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				int j;

				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 (10 times)
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j = 48;

	while (j <= 57)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		j++;
	}
}

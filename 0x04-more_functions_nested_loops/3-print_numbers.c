#include "main.h"

/**
 * print_numbers - Prints number from 0-9
 * followed by a new line
 * Return: void (Success)
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

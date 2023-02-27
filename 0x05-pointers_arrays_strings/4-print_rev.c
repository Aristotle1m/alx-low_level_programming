#include "main.h"

/**
 * print_rev - prints backward strings
 * @g: strings
 * Return> void
 */
void print_rev(char *g)
{
	int i = 0;

	while (g[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(g[i]);
		i--;
	}
	_putchar('\n');
}

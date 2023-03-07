#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @k: as parameter
 */
void _puts_recursion(char *k)
{
	if (*k == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*k);
	_puts_recursion(k + 1);
}

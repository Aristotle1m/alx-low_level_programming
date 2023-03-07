#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @k: pointer to string
 */

void _print_rev_recursion(char *k)
{
	if (*k != '\0')
	{
		_print_rev_recursion(k + 1);
		putchar(*k);
	}
}

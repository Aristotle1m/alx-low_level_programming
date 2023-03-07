#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @k: pointer to
 * Return: recursion
 */

int _strlen_recursion(char *k)
{
	if (*k == '\0')
		return (0);
	return (1 + _strlen_recursion(++k));
}

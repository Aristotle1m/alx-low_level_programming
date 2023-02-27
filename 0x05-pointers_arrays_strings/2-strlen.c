#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: The string whose lent is to be returned
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

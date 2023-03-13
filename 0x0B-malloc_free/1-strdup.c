#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a new space allocated in the memory.
 * @str: strings
 * Return: pointer of an array of chars
 * betty style doc for function main goes there
 */

char *_strdup(char *str)
{
	char *result;
	int x, y = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		y++;

	result = malloc(sizeof(char) * (y + 1));

	if (result == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		result[x] = str[x];

	result[y] = '\0';

	return (result);
}

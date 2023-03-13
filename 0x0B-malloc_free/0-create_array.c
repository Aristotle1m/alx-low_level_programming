#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @s: size of the array
 * @c: storaged char.
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int s, char c)
{
	char *array;
	unsigned int x;

	if (s == 0)
		return (NULL);
	array = malloc(sizeof(char) * s);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < s; x++)
		array[x] = c;

	return (array);
}

#include <stdio.h>
#include "main.h"

/**
 * create_array - creating an array of chracters
 * @x: the size of an array
 * @y: storage characters
 * Return: pointer of an array of characters
 */

char *create_array(unsigned int x, char y)
{
	char *result;
	unsigned int i;

	if (x == 0)
		return (NULL);

	result = malloc(sizeof(char y) * x);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		result[i] = y;
	}
	return (result);
}

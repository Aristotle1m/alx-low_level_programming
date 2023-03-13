#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializ
 * s it with a specific char
 * @size: size of initialize array
 * @c: char to initialize
 * Return: NULL if size = 0, else a pointer to the array,
 * or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *thearray;
	unsigned int indexofarray;

	if (size == 0)
		return (NULL);

	thearray = malloc(sizeof(char) * size);

	if (thearray == NULL)
		return (NULL);

	for (indexofarray = 0; indexofarray < size; indexofarray++)
	{
		thearray[indexofarray] = c;
	}
	return (thearray);
}

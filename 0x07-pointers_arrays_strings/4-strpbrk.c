#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @xx: source string
 * @accept: set of bytes to be searched for
 * Return: pointer to the matched byte
 */

char *_strpbrk(char *xx, char *accept)
{
	int index;

	while (*xx)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*xx == accept[index])
				return (xx);
		}
		xx++;
	}
	return ('\0');
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated on
 * @s2: string to concatenate to s1
 * Return: NULL if concatenate fails else a pointer to the
 * newly allocated space in the memory
*/

char *str_concat(char *s1, char *s2)
{
	char *cs;
	int xc, cx = 0, lc = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (xc = 0; s1[xc] || s2[xc]; xc++)
		lc++;

	cs = malloc(sizeof(char) * lc);

	if (cs == NULL)
		return (NULL);

	for (xc = 0; s1[xc]; xc++)
		cs[cx++] = s1[xc];

	for (xc = 0; s2[xc]; xc++)
		cs[cx++] = s2[xc];

	return (cs);
}

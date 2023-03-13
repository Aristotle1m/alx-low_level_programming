#include "main.h"

/**
 * str_concat - function which concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int x, cx = 0,  l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		l++;

	c_str = malloc(sizeof(char) * l);

	if (c_str == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		c_str[cx++] = s1[x];

	for (x = 0; s2[x]; x++)
		c_str[cx++] = s2[x];

	return (c_str);
}

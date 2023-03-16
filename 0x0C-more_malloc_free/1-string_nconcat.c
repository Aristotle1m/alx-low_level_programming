#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to be included in @s2
 * Return: newly allocated space in memory, NUll if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *ar = s1;
	unsigned int x, y;
	unsigned int l1, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	while (*s1++)
		x++;
	l1 = 1;
	s1 = ar;

	l2 = n;

	str = malloc((l1 + l2) * sizeof(char) + 1);
	if (str == Null)
		return (NULL);

	y = 0;
	while (y < l1)
	{
		str[y] = s1[y];
		y++;
	}
	while (y < l1 + l2)
	{
		str[y] = s2[y - l1];
		y++;
	}

	str[y] = '\0';
	return (str);
}

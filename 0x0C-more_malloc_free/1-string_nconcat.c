#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -function that concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to add to s1
 * Return: pointer to space allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *space;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n > j)
	n = j;

	space = malloc((i + n + 1) * sizeof(char));

	if (space == NULL)
		return (0);

	for (k = 0; k < i; k++)
		space[k] = s1[k];

	for (; k < (i + n); k++)
		space[k] = s2[k - i];

	space[k] = '\0';

	return (space);
}

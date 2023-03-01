#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @y: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *y)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(y + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(y + count) == alphabet[i])
			{
				*(y + count) = rot13[i];
			break;
			}
		}
		count++;
	}

	return (y);
}

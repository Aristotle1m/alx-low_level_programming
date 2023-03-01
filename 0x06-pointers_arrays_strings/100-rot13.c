#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @x: input string.
 * Return: the pointer to destination
 * betty style doc for function main goes there
 */
char *rot13(char *x)
{
int encode = 0, i;
char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(x + encode) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(x + encode) == alph[i])
{
*(x + encode) = rot13[i];
break;
}
}
encode++;
}
return (x);
}
}

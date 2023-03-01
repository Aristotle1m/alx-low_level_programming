#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x: input string.
 * Return: the pointer to destination.
 * betty style doc for function main goes there
 */
char *leet(char *x)
{
int count = 0, i;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int nos[] = {52, 51, 48, 55, 49};
while (*(x + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(x + count) == lower_case[i] || *(x + count) == upper_case[i])
{
*(x + count) = nos[i];
break;
}
}
count++;
}
return (x);
}

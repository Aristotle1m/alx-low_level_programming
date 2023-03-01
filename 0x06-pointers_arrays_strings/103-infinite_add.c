#include "main.h"
#include <stdio.h>
/**
* infinite_add - adds two numbers
* @n1: number one.
* @n2: number two.
* @r: buffer that the function will use to store the result.
* @size_r: buffer size:
* Return: the pointer to dest.
* betty style doc for function main goes there
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i1 = 0, i2 = 0, op, bg, dr1, dr2, add = 0;
while (*(n1 + i1) != '\0')
i1++;
while (*(n2 + i2) != '\0')
i2++;
if (i1 >= i2)
bg = i1;
else
bg = i2;
if (size_r <= bg + 1)
return (0);
r[bg + 1] = '\0';
i1--, i2--, size_r--;
dr1 = *(n1 + i1) - 48, dr2 = *(n2 + i2) - 48;
while (bg >= 0)
{
op = dr1 + dr2 + add;
if (op >= 10)
add = op / 10;
else
add = 0;
if (op > 0)
*(r + bg) = (op % 10) + 48;
else
*(r + bg) = '0';
if (i1 > 0)
i1--, dr1 = *(n1 + i1) - 48;
else
dr1 = 0;
if (i2 > 0)
i2--, dr2 = *(n2 + i2) - 48;
else
dr2 = 0;
bg--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}

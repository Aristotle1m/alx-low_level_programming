#include "main.h"
/**
 * _strcmp - compares two strings
 * @x1: first string.
 * @x2: second string.
 * Return: 0 if string1 and string2 are equals, chg nos /=
 * betty style doc for function main goes there
 */
int _strcmp(char *x1, char *x2)
{
int str1 = 0, str2 = 0;
while (str2 == 0)
{
if ((*(x1 + str1) == '\0') && (*(x2 + str1) == '\0'))
break;
str2 = *(x1 + str1) - *(x2 + str1);
str1++;
}
return (str2);
}

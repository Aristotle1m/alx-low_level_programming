#include "main.h"
/**
 * _strncat - concatenates 2 strings.
 * @main: source.
 * @surb: destination.
 * @n: byte amounr used from source.
 * Return: dest pointer.
 * betty style doc for function main goes there
 */
char *_strncat(char *main, char *surb, int n)
{
int str1 = 0, str2 = 0;
while (*(main + str1) != '\0')
{
str1++;
}
while (str2 < n)
{
*(main + str1) = *(surb + str2);
if (*(surb + str2) == '\0')
break;
str1++;
str2++;
}
return (main);
}

#include "main.h"
/**
 * *_strcat - concatenates 2 strings.
 * @main: source.
 * @surb: destination.
 * Return: the pointer to dest.
 * betty style doc for function main goes there
 */
char *_strcat(char *main, char *surb)
{
int str1 = 0, str2 = 0;
while (*(main + str1) != '\0')
{
str1++;
}
while (str2 >= 0)
{
*(main + str1) = *(surb + str2);
if (*(surb + str2) == '\0')
break;
str1++;
str2++;
}
return (main);
}

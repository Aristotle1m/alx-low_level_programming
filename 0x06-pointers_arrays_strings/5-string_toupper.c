#include "main.h"
/**
 * string_toupper - Changes all lowercase to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 * betty style doc for function main goes there
 */
char *string_toupper(char *str)
{
int string = 0;
while (str[string])
{
if (str[string] >= 'a' && str[string] <= 'z')
str[string] -= 32;
string++;
}
return (str);
}

#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if int c is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 * betty style doc for function main goes there
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

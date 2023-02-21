#include "main.h"
/**
 * _isalpha - shows 1 if input is an alphabet else 0
 * @c: character to check
 * Return: 1 for alphaber. 0 for the rest  Always (SUCCESS)
 * betty style doc for function main goes there
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
/* using ASCII valuse in the code above */
_putchar('\n');
}

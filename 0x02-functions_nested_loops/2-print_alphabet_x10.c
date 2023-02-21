#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return:0  Always (SUCCESS)
 * betty style doc for function main goes there
 */
void print_alphabet_x10(void)
{
int a, i;
for (a = 0; a <= 9; a++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
/* using ASCII valuse in the code above */
_putchar('\n');
}
}

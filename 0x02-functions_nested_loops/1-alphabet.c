#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * Return:0  Always (SUCCESS)
 * betty style doc for function main goes there
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
/* using ASCII valuse in the code above */
_putchar('\n');
}

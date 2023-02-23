#include "main.h"
/**
 * print_most_numbers - prints num 1-9 except 2&4
 * Return: no return.
 * betty style doc for function main goes there
 */
void print_most_numbers(void)
{
int a;
for (a = 48; a < 58; a++)
{
if (a != 50 && a != 52)
_putchar(a);
}
_putchar('\n');
}

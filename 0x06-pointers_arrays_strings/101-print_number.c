#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 * betty style doc for function main goes there
 */
void print_number(int n)
{
unsigned int x, y, range;
if (n < 0)
{
_putchar(45);
x = n * -1;
}
else
{
x = n;
}
y = x;
range = 1;
while (y > 9)
{
y /= 10;
range *= 10;
}
for (; range >= 1; range /= 10)
{
_putchar(((x / range) % 10) + 48);
}
}

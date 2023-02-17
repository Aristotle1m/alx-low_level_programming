#include <stdio.h>
/**
 * main - char number combo
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
 */
int main(void)
{
int y;
for (y = 48; y < 58; y++)
{
putchar(y);
if (y != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

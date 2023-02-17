#include <stdio.h>
/**
 * main - print base 10 number with only 2 putchar
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
 */
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}

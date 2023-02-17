#include <stdio.h>
/**
 * main - printing base 16 numbers
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
 */
int main(void)
{
int i = '0';
int abc = 'a';
while (i <= '9')
{
putchar(i);
i++;
}
while (abc <= 'f')
{
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}

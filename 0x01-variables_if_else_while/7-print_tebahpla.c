#include <stdio.h>
/**
 * main -  Reversed alphabets printing with  Putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char reverse_alphabet = 'z';
while (reverse_alphabet >= 'a')
{
putchar(reverse_alphabet);
reverse_alphabet--;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - testing lowercase alphabet.
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}

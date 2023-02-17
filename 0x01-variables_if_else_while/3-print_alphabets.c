#include <stdio.h>
/**
 * main - testing lower AND UPPPERcase alphabet.
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}

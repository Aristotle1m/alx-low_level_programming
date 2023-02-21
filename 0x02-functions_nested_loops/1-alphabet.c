#include "main.h"
/**
 * Function prints the alphabet in lowercase
 * followed by a new line
 * Return:0 (Success)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

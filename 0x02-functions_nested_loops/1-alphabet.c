#include "main.h"
/**
 * print_alphabet- This is where the execution starts
 * Function prints the alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
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
	return (0);
}

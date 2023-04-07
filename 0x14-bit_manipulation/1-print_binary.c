#include "holberton.h"

/**
  * print_binary - to print the binary representation of a numnber
  * @n: unsigned long int
  * number to be represented to base of two
  * Return: no return
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}

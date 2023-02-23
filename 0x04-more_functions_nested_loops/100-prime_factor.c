#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int n = 612852475143, i = 3;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}


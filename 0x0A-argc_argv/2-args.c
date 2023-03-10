#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recovers
 * @argc: number of all arguments
 * @argv: array of arguments
 *
 * Return: Lways o (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

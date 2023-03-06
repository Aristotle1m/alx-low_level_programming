#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @x: chessboard to be printed
 */
void print_chessboard(char (*x)[8])
{
	int indx1, indx2;

	for (indx1 = 0; x[indx1][7]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(x[indx1][indx2]);

		_putchar('\n');
	}
}

#include "main.h"

/**
 * _isdigit - This function checks for digits between 0 to 9
 * @x: digit
 * Return: returns 1 if digit and 0 if otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * reverse_array - reverse content in an array of integer.
 * @x: array.
 * @y: number of integer in array.
 * Return : nothing
 * betty style doc for function main goes there
 */
void reverse_array(int *x, int y)
{
int temp, begin = 0;
int end = y - 1;
while (begin < end)
{
temp = *(x + begin);
*(x + begin) = *(x + end);
*(x + end) = temp;
begin++, end--;
}
}

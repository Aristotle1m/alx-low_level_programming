#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determines if a number n is either greter than 5, less than 6 /= 0
* Return: Always 0 (Success)
* betty style doc for function main goes there
* more headers goes there
*/
int main(void)
{
int n, z;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
z = n % 10;
if (z > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, z);
}
else if (z == 0)
{
printf("Last digit of %d is %d and is 0\n", n, z);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
}
return (0);
}

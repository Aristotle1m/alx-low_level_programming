#include <stdio.h>
/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 * betty style doc for function main goes there
 */
int main(void)
{
int even_sum = 0;
int a;
int b;
int sum = 1;
a = 1;
b = 1;
while (b < 4000000)
{
sum = a + b;
a = b;
b = sum;
if ((sum <= 4000000) && (sum % 2 == 0))
even_sum += sum;
}
printf("%d\n", even_sum);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - keygen.
 * Return: 0 Always.
 * betty style doc for function main goes there
 */
int main(void)
{
int key = 0, gen = 0;
time_t t;
srand((unsigned int) time(&t));
while (gen < 2772)
{
key = rand() % 128;
if ((gen + key) > 2772)
break;
gen = gen + key;
printf("%c", key);
}
printf("%c\n", (2772 - gen));
return (0);
}

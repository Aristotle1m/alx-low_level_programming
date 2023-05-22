#include "main.h"
/**
 * _strncpy - string copycat
 * @main: source.
 * @surb: destination.
 * @n: bytes amount from src.
 * Return: dest pointer
 * betty style doc for function main goes there
 */
char *_strncpy(char *main, char *surb, int n)
{
int str;
for (str = 0; str < n && surb[str] != '\0'; str++)
main[str] = surb[str];
for ( ; str < n; str++)
main[str] = '\0';
return (main);
}

#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @x: input string.
 * Return: the pointer to dest.
 * betty style doc for function main goes there
 */
char *cap_string(char *x)
{
int word = 0, i;
int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(x + word) >= 97 && *(x + word) <= 122)
*(x + word) = *(x + word) - 32;
word++;
while (*(x + word) != '\0')
{
for (i = 0; i < 13; i++)
{
if (*(x + word) == sep_words[i])
{
if ((*(x + (word + 1)) >= 97) && (*(x + (word + 1)) <= 122))
*(x + (word + 1)) = *(x + (word + 1)) - 32;
break;
}
}
word++;
}
return (x);
}


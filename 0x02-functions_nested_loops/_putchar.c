#include "stdio.h"
#include <unistd.h>
/**
 * _putchar -whrite the character c to stdout
 * @c: the character to print 
 *
 * Return: On success 1
 * On error, -1 is returne, and errno is set appropiately.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}

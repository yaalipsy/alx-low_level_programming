#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to pint
 * Return: on success 1
 * on error, -1 is returned, and erno is set appropor
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

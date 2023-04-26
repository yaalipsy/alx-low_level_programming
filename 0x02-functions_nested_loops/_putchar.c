#include <unistd.h>

/**
 * _Putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on success 
 * On error, -1 is returned, and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1);

}

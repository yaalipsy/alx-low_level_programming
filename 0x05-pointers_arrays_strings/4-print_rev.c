#include "main.h"
/**
 * print_rev - imprime enreversa
 * @s: string
 * Reyurn: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	S--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		S--;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Covers binary to an unsigned int
 * @b: Char string
 * Return:  Converted decimal number or 0 if there
 *	is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, Bin;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (Bin = 1, i = 0, len--; len >= 0; len--, Bin *= 2)
	{
		if (b[len] == '1')
			i += Bin;
	}
	return (i);
}

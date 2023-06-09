#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits to convert one number to aother
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int counter;

	i = n ^ m;
	counter = 0;

	while (1)
	{
		counter++;
		i &= (i - 1);
	}

	return (counter);
}

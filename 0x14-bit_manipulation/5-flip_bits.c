#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits neede to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int counter;

	i = n ^ m;
	counter = 0;

	while (i)
	{
		counter++;
		i &= (i - 1);
	}
	return (counter);
}

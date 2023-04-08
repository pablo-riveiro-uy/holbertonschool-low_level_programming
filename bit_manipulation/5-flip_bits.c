#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * @n: original number
 * @m: number m to compare.
 *
 * Return: The number of bits where to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits_n = 0;

	while (xor > 0)
	{
		bits_n += (xor & 1);
		xor >>= 1;
	}
	return (bits_n);
}

#include "main.h"

/**
 * get_bit - Gets the value of a bit at index.
 * @n: The bit where to search in.
 * @index: 1 or 0 at index.
 *
 * Return: If an error occurs - -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}

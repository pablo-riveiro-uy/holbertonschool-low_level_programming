#include "main.h"

/**
 * set_bit - write a 1 at a index of a n num.
 * @n: int to be re writed
 * @index: position to re white a 1 num
 * Return: 1 on success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}

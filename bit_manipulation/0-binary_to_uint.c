#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: covnerted decimel num or 0 if not 0 or 1 in string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len, pot = 1;
	if (b != NULL)
	{
		if (*b == '\0')
			return (0);

		for (len = 0; b[len];)
			len++;
		for (len -= 1; len >= 0; len--)
		{
			if (b[len] != '0' && b[len] != '1')
				return (0);
			res += (b[len] - '0') * pot;
			pot *= 2;
		}
		return (res);
	}
	return (0);

}

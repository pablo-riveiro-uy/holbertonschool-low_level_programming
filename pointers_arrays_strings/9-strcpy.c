#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string pinters
 *
 * Return: return dest string
 * @dest: destiny string
 * @src: source string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0,
	    o = 0;

	while (src[i])
	{
		i++
	}
	while (o >= i)
	{
		*dest = *src;
		o++;
	}

	return (dest);
}


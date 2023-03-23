#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - take n values en make a sum
 *  Return: sum of n values or 0 if 0 n
 */
int sum_them_all(const unsigned int n, ...)
{

	int res = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}
	va_end(args);
	return (res);
}

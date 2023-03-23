#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_srings - print n strings
 * @n: n args to be printed
 * @separator: char to separate
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}

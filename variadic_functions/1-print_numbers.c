#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print n numbers with separator character
 * @n: n fot n numbers to print
 * @separator: separation character
 * Return: list of numbers or NULL if no separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

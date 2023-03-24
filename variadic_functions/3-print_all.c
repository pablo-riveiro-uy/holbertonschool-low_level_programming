#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print varius formats of data
 * @format: a list of formats to print
*/
void print_all(const char * const format, ...)
{
	int i, printing;
	char *str;
	va_list args;

	va_start(args, format), i = 0, printing = 0;
	while (format && format[i])
	{
	if (printing != 0 && format[i] + 1 != '\0')
		printf("%s", ", ");
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int)), printing = 1;
		break;
	case 'i':
		printf("%d", va_arg(args, int)), printing = 1;
		break;
	case 'f':
		printf("%f", va_arg(args, double)), printing = 1;
		break;
	case 's':
		str = va_arg(args, char *);
		if (!str)
		{
			printf("(nil)"), printing = 1;
			break;
		}
		printf("%s", str), printing = 1;
		break;
	default:
		printing = 0;
		break;
	}
	i++;
	}
	printf("\n"), va_end(args);
}

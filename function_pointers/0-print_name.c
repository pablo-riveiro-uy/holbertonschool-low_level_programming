#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: a void function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%s", name);
	f(name);
}

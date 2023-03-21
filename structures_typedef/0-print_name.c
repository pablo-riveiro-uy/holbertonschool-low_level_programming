#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints and execute a function
 * @name: name of the person
 * @f: a void function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", name);
	f(name);
}

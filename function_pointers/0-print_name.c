#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a char en execute a function
 * @name: name of the person
 * @f: a void function
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (f != NULL)
		f(name);
}

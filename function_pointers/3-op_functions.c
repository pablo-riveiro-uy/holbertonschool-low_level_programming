#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: int
 * @f: int
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two ints
 * @a: int
 * @b: int
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate
 * @a: int
 * @b: int
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two ints
 * @a: int
 * @b: int
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op-mod - print a char en execute a function
 * @a: name of the person
 * @b: a void function
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}

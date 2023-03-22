#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - chose an operation function by pointer
 * @argc: count of arguments of main
 * @argv: string of arguments of main
 *
 * Return: 0 on ok NULL on fail signs to operation or mod or divide by 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*operation)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || get_op_func(argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(get_op);
	res = operation(a, b);

	printf("%d\n", res);
	return (0);


}

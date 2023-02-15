#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: print the last digit of the number stored in the variable
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = str(n);
	if (n > 5)
	{
		printf("Last digit of %i is %i, and is greater than 5", n, last);
	}
	else if (n < 6)
	{
		printf("Last digit of %i is %i, and is less than 6", n, last);
	}
	else
	{
		printf("Last digit of %i is %i, and is 6", n, last);
	}
	return (0);
}
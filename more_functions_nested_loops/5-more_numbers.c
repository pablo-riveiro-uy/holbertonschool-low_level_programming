#include "main.h"

/**
 * more_numbers - check the code.
 *
 */

void more_numbers(void)
{
	for (int o = 0; o <= 10; o++)
	{
		for (int i = 0; i <= 14; i++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}

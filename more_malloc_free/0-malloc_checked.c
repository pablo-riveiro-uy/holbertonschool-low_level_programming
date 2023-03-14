#include "main.h"
#include <stdlib.h>

/**
  * malloc_cheched - alloc mem.
  * return@b: number of bytes to allocate
  * Return - pointer allocated or exit 98 state on NULL
  */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}

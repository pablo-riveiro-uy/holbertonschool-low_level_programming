#include "main.h"
/**
 *  print_chessboard - print letters from bi dimentional array
 *
 * @a: an array with of arrays
 *
 */

void print_chessboard(char (*a)[8])
{
	int x = 0,
	    y = 0;

	for (; x < 8; x++)
	{
		for (; y < 8; y++)
		{
			printf("%s",a[x,y]);
		}
	printf("\n");
	}

}

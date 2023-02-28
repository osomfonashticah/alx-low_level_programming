#include "main.h"

/**
 * swap_int - swaps 2 variables
 * @a:variable to be swappped
 * @b:variable to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	tmp = *b;
}

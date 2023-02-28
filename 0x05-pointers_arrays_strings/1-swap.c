#include "main.h"
#include<stdio.h>

/**
 * swap_int - swaps 2 variables
 * @a:variable to be swappped
 * @b:variable to be swapped
 * return : always 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

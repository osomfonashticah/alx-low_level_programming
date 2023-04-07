#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @index: index
 * @n:the number
 * Return:1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

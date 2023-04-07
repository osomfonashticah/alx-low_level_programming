#include "main.h"

/**
 * get_bit - returns a value of a bit at a given index
 * @index: index 
 * Return: -1 otherwise the value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

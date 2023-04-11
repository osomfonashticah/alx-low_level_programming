#include "main.h"

/**
 * flip_bits - that returns the number of count you would
 * need to flip to get from one number to another
 * @n: The number.
 * @m: The number to flip n to.
 * Return: number of count to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, count = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}

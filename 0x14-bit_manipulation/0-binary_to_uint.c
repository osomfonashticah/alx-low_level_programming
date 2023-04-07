#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, res = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);

		if (b[i - 1] == '1')
			res += base;
		base *= 2;
		i--;
	}
	return (res);
}

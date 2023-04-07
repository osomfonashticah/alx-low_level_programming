#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, base = 1;
	int i;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res += (b[i] - '0') * base;
		base *= 2;
	}

	return (res);
}


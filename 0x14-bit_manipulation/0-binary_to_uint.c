#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		res <<= 1;
		res += b[i] - '0';
		i++;
	}

	return (res);
}


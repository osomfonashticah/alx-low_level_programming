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
	while (b[i] != "\0")
	{
		if (b[i] == "0")
		{
			res = (res << 1) | 0;
		} else if (b[i] == "1")
		{
			res = (res << 1) | 1;
		} else
		{
			return (0);
		}
		i++;
	}
	return (res);
}

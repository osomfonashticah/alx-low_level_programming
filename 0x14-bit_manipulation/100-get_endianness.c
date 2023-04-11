#include "main.h"

/**
 * get_endianness - Checks the cuness.
 * Return: If big-cu - 0. little-cu - 1.
 */
int get_endianness(void)
{
	int number = 1;
	char *cu = (char *)&number;

	if (*cu == 1)
		return (1);

	return (0);
}

#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * excepts 4 and 2
 * Returns:Always 0
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar((i % 10) + '0');
		if (i == 2 || i == 4)
			continue;
		i++;
	}
	_putchar('\n');
}

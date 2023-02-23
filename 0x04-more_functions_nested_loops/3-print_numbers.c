#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Returns: Always 0
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}

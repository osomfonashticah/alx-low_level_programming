#include "main.h"
/**
 * print_alhapbet_x10 - a function that prints 10 times the alphabet.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}

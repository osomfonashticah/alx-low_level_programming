#include "main.h"

/**
 * main - a function that prints the alphabet in lowercase.
 * Return. Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

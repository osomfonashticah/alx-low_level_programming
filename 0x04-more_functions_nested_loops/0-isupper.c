#include "main.h"

/**
 *  _isupper - checks for upper characters.
 * @c: character checked.
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:The string to be appended upon
 * @src: The string to be joined to dest
 * @n: The number of bytes from src to be joined to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destLen = 0;

	while (dest[i++])
		destLen++;
	for (i = 0; src[i] && i < n; i++)
		dest[destLen++] = src[i];
	return (dest);
}

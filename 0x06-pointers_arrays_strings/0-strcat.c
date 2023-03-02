#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destLen = 0;

	while (dest[i++])
		destLen++;
	for (i = 0; src[i]; i++)
		dest[destLen++] = src[i];
	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies at most inputted number
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 * Return:A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLen = 0;

	while (src[i++])
		srcLen++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = srcLen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

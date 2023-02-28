#include "main.h"
#include<stdio.h>

/**
 * _strlen - prints the length of a string
 * @s:charater type
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}


#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments passed to it
 * @argc:counts the arguments
 * @argv:array name
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}

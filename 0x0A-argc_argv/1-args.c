#include "main.h"
#include <stdio.h>

/**
 * main - function that prints number of arguments passed to it
 * @argc:counts the arguments
 * @argv:array name
 * Return:0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include<stdio.h>

/**
 * main - function that multiplies two integers
 * @argc: argument count
 * @argv:argument array
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1];
		b = atoi(argv[2];
		result = a * b;
		printf("%d\n", result);
		return (0);

	}
}
